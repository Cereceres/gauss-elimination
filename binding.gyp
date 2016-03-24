

{
  "targets": [
    {
      "target_name": "gauss-elimination",
      "sources": [
        "fromcpp/gauss-elimination.cc"
      ],'cflags': [''],
      "include_dirs": ["<!(node -e \"require('nan')\")"
      ],
      "libraries": ["-L/usr/local/lib"
      ]
    }
  ]
}
