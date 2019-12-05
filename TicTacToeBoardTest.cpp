/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/
TEST(TicTacToeBoardTest, toggleTest)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.toggleTurn(), O);
}
TEST(TicTacToeBoardTest, toggleTwice)
{
	TicTacToeBoard myBoard;
	myBoard.toggleTurn();
	ASSERT_EQ(myBoard.toggleTurn(), X);
}
TEST(TicTacToeBoardTest, PlaceRowOutOfBounds)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.placePiece(-1, 0), Invalid);
}