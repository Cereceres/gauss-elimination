

{
  "targets": [
    {
<<<<<<< HEAD
      "target_name": "gauss-elimination",
      "sources": [
        "fromcpp/gauss-elimination.cc"
      ],'cflags': [''],
      "include_dirs": ["<!(node -e \"require('nan')\")"
      ],
      "libraries": ["-L/usr/local/lib"
      ]
=======
      "target_name": "gauss",
      "sources": [
        "gauss.cc"
      ],'cflags': [''],
      "include_dirs": ["<!(node -e \"require('nan')\")"
      ],
      "libraries": ["-L/usr/local/lib"]
>>>>>>> 2edbddc3ce169b6aaf51fa5f592f91d802eb0af0
    }
  ]
}
