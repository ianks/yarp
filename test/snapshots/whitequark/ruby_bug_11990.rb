ProgramNode(0...1)(
  ScopeNode(0...0)([]),
  StatementsNode(0...1)(
    [CallNode(0...1)(
       nil,
       nil,
       IDENTIFIER(0...1)("p"),
       nil,
       ArgumentsNode(13...12)(
         [StringConcatNode(13...12)(
            HeredocNode(13...17)(
              HEREDOC_START(2...6)("<<~E"),
              [StringNode(13...17)(
                 nil,
                 STRING_CONTENT(13...17)("  x\n"),
                 nil,
                 "x\n"
               )],
              HEREDOC_END(17...19)("E\n"),
              2
            ),
            StringNode(7...12)(
              STRING_BEGIN(7...8)("\""),
              STRING_CONTENT(8...11)("  y"),
              STRING_END(11...12)("\""),
              "  y"
            )
          )]
       ),
       nil,
       nil,
       "p"
     )]
  )
)
