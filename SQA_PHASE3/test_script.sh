cd Ticket\ Selling\ System\ First\ Version

make clean
make output


cd ../

# test for addcredit 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/AddCredit_Input_Tests/addcredit00_input_test.txt" > "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit00_output_terminaltest.txt" "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for addcredit 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/AddCredit_Input_Tests/addcredit02_input_test.txt" > "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit02_output_terminaltest.txt" "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for addcredit 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/AddCredit_Input_Tests/addcredit03_input_test.txt" > "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit03_output_terminaltest.txt" "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for addcredit 04
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/AddCredit_Input_Tests/addcredit04_input_test.txt" > "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit04_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit04_output_terminaltest.txt" "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit04_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit04_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for addcredit 05
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/AddCredit_Input_Tests/addcredit05_input_test.txt" > "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit05_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit05_output_terminaltest.txt" "Testing_Directory/Actual_Output/AddCredit_Output_Tests/addcredit05_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/AddCredit_Output_Tests/addcredit05_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy00_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy01_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy02_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy03_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy03_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 04
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy04_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy04_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy04_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy04_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy04_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 05
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy05_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy05_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy05_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy05_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy05_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 07
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy07_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy07_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy07_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy07_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy07_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for buy 08
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Buy_Input_Tests/Buy08_input_test.txt" > "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy08_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy08_output_terminaltest.txt" "Testing_Directory/Actual_Output/Buy_Output_Tests/Buy08_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Buy_Output_Tests/Buy08_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Create 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create00_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Create 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create01_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Create 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create02_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Create 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create03_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create03_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Create 04
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create04_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create04_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create04_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create04_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create04_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Create 05
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Create_Input_Tests/Create05_input_test.txt" > "Testing_Directory/Actual_Output/Create_Output_Tests/Create05_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create05_output_terminaltest.txt" "Testing_Directory/Actual_Output/Create_Output_Tests/Create05_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Create_Output_Tests/Create05_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Delete 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Delete_Input_Tests/Delete00_input_test.txt" > "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Delete 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Delete_Input_Tests/Delete01_input_test.txt" > "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Delete 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Delete_Input_Tests/Delete02_input_test.txt" > "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Delete 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Delete_Input_Tests/Delete03_input_test.txt" > "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete03_output_terminaltest.txt" "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Delete 06
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Delete_Input_Tests/Delete06_input_test.txt" > "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete06_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete06_output_terminaltest.txt" "Testing_Directory/Actual_Output/Delete_Output_Tests/Delete06_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Delete_Output_Tests/Delete06_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Login 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Login_Input_Tests/Login00_input_test.txt" > "Testing_Directory/Actual_Output/Login_Output_Tests/Login00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Login_Output_Tests/Login00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Login 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Login_Input_Tests/Login01_input_test.txt" > "Testing_Directory/Actual_Output/Login_Output_Tests/Login01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Login_Output_Tests/Login01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Login 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Login_Input_Tests/Login02_input_test.txt" > "Testing_Directory/Actual_Output/Login_Output_Tests/Login02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Login_Output_Tests/Login02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Login 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Login_Input_Tests/Login03_input_test.txt" > "Testing_Directory/Actual_Output/Login_Output_Tests/Login03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login03_output_terminaltest.txt" "Testing_Directory/Actual_Output/Login_Output_Tests/Login03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Login 05
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Login_Input_Tests/Login05_input_test.txt" > "Testing_Directory/Actual_Output/Login_Output_Tests/Login05_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login05_output_terminaltest.txt" "Testing_Directory/Actual_Output/Login_Output_Tests/Login05_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Login_Output_Tests/Login05_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Logout 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Logout_Input_Tests/Logout00_input_test.txt" > "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Logout 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Logout_Input_Tests/Logout01_input_test.txt" > "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Logout 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Logout_Input_Tests/Logout02_input_test.txt" > "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Logout 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Logout_Input_Tests/Logout03_input_test.txt" > "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout03_output_terminaltest.txt" "Testing_Directory/Actual_Output/Logout_Output_Tests/Logout03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Logout_Output_Tests/Logout03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Refund 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/RefundCredit_Input_Tests/Refund00_input_test.txt" > "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund00_output_terminaltest.txt" "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Refund 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/RefundCredit_Input_Tests/Refund01_input_test.txt" > "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund01_output_terminaltest.txt" "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Refund 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/RefundCredit_Input_Tests/Refund02_input_test.txt" > "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund02_output_terminaltest.txt" "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Refund 03
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/RefundCredit_Input_Tests/Refund03_input_test.txt" > "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund03_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund03_output_terminaltest.txt" "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund03_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund03_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Refund 04
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/RefundCredit_Input_Tests/Refund04_input_test.txt" > "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund04_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund04_output_terminaltest.txt" "Testing_Directory/Actual_Output/RefundCredit_Output_Tests/Refund04_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/RefundCredit_Output_Tests/Refund04_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Sell 00
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell00_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell00_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell00_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell00_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell00_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Sell 01
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell01_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell01_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell01_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell01_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell01_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Sell 02
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell02_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell02_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell02_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell02_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell02_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi

# test for Sell 04
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell04_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell04_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell04_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell04_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell04_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Sell 06
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell06_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell06_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell06_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell06_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell06_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Sell 07
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell07_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell07_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell07_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell07_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell07_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi


# test for Sell 08
#passing in info to directory and display results in new file
echo ""
./output < "Testing_Directory/Tests_Directory_Theory/Input_Tests/Sell_Input_Tests/Sell08_input_test.txt" > "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell08_output_test.txt"

# compare whether resutling terminal display matches terminal display saved in Output_Tests folder
if diff -b "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell08_output_terminaltest.txt" "Testing_Directory/Actual_Output/Sell_Output_Tests/Sell08_output_test.txt"
then
  echo "Terminal Output Passed!"
else
  echo "Terminal Output failed..."
fi
echo ""
# compare whether resutling daily transaction file matches transactions saved in Output_Tests folder
if diff "Ticket Selling System First Version/Daily_Transaction_Output_File.txt" "Testing_Directory/Tests_Directory_Theory/Output_Tests/Sell_Output_Tests/Sell08_output_test.txt"
then
  echo "DTF Passed!"
else
  echo "DTF failed..."
fi
