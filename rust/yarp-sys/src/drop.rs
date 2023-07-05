use crate::{yp_buffer_free, yp_list_free, yp_parser_free, yp_string_free};

macro_rules! impl_drop {
  ($($t:ty => $f:ident),*) => {
      $(
          impl Drop for $t {
              fn drop(&mut self) {
                  unsafe {
                      $f(self);
                  }
              }
          }
      )*
  };
}

impl_drop!(
  crate::Parser => yp_parser_free,
  crate::Buffer => yp_buffer_free,
  crate::List =>   yp_list_free,
  crate::String => yp_string_free
);
