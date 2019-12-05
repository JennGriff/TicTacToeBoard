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
	ASSERT_EQ(myBoard.placePiece(6, 0), Invalid);
}
TEST(TicTacToeBoardTest, PlaceNegativeOutOfBounds)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.placePiece(-1, 0), Invalid);
}

TEST(TicTacToeBoardTest, PlacePieceToggle)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	ASSERT_EQ(myBoard.placePiece(0, 1), O);
}

TEST(TicTacToeBoardTest, PlacePieceToggleFull)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	ASSERT_EQ(myBoard.placePiece(0, 0), X);
}

TEST(TicTacToeBoardTest, GetPieceX)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 1);
	ASSERT_EQ(myBoard.getPiece(0, 1), X);
}

TEST(TicTacToeBoardTest, GetPieceO)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	myBoard.placePiece(0, 1);
	ASSERT_EQ(myBoard.getPiece(0, 1), O);
}

TEST(TicTacToeBoardTest, GetPieceBlank)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.getPiece(0, 1), Blank);
}

TEST(TicTacToeBoardTest, GetPieceBlank)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.getPiece(9, 1), Invalid);
}

TEST(TicTacToeBoardTest, getWinnerX1)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	myBoard.placePiece(1, 0);
	myBoard.placePiece(0, 1);
	myBoard.placePiece(2, 1);
	myBoard.placePiece(0, 2);
	ASSERT_EQ(myBoard.getWinner(), X);
}

TEST(TicTacToeBoardTest, getWinnerX2)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(1, 0);
	myBoard.placePiece(2, 0);
	myBoard.placePiece(1, 1);
	myBoard.placePiece(2, 1);
	myBoard.placePiece(1, 2);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX3)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(2, 0);
	myBoard.placePiece(1, 0);
	myBoard.placePiece(2, 1);
	myBoard.placePiece(1, 1);
	myBoard.placePiece(2, 2);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX4)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,1);
	myBoard.placePiece(1,0);
	myBoard.placePiece(2,2);
	myBoard.placePiece(2,0);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX5)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,1);
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,1);
	myBoard.placePiece(2,2);
	myBoard.placePiece(2,1);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX6)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,0);
	myBoard.placePiece(2,2);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX7)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(0,1);
	myBoard.placePiece(2,2);
	ASSERT_EQ(myBoard.getWinner(), X);
}
TEST(TicTacToeBoardTest, getWinnerX8)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(2,0);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(0,1);
	myBoard.placePiece(0,2);
	ASSERT_EQ(myBoard.getWinner(), X);
}

/************************    Y    ***************************/

TEST(TicTacToeBoardTest, getWinnerO1)
{
	TicTacToeBoard mOBoard;
	mOBoard.placePiece(1, 1);
	mOBoard.placePiece(0, 0);
	mOBoard.placePiece(1, 0);
	mOBoard.placePiece(0, 1);
	mOBoard.placePiece(2, 1);
	mOBoard.placePiece(0, 2);
	ASSERT_EQ(mOBoard.getWinner(), O);
}

TEST(TicTacToeBoardTest, getWinnerO2)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	myBoard.placePiece(1, 0);
	myBoard.placePiece(2, 0);
	myBoard.placePiece(1, 1);
	myBoard.placePiece(2, 1);
	myBoard.placePiece(1, 2);
	ASSERT_EQ(myBoard.getWinner(),O);
}
TEST(TicTacToeBoardTest, getWinnerO3)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0, 0);
	myBoard.placePiece(2, 0);
	myBoard.placePiece(1, 0);
	myBoard.placePiece(2, 1);
	myBoard.placePiece(1, 1);
	myBoard.placePiece(2, 2);
	ASSERT_EQ(myBoard.getWinner(), O);
}
TEST(TicTacToeBoardTest, getWinnerO4)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,2);
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,1);
	myBoard.placePiece(1,0);
	myBoard.placePiece(2,2);
	myBoard.placePiece(2,0);
	ASSERT_EQ(myBoard.getWinner(), O);
}
TEST(TicTacToeBoardTest, getWinnerO5)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,2);
	myBoard.placePiece(0,1);
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,1);
	myBoard.placePiece(2,2);
	myBoard.placePiece(2,1);
	ASSERT_EQ(myBoard.getWinner(), O);
}
TEST(TicTacToeBoardTest, getWinnerO6)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,0);
	myBoard.placePiece(0,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,0);
	myBoard.placePiece(2,2);
	ASSERT_EQ(myBoard.getWinner(), O);
}
TEST(TicTacToeBoardTest, getWinnerO7)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(2,0);
	myBoard.placePiece(0,0);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(0,1);
	myBoard.placePiece(2,2);
	ASSERT_EQ(myBoard.getWinner(),O);
}
TEST(TicTacToeBoardTest, getWinnerO8)
{
	TicTacToeBoard myBoard;
	myBoard.placePiece(0,0);
	myBoard.placePiece(2,0);
	myBoard.placePiece(1,2);
	myBoard.placePiece(1,1);
	myBoard.placePiece(0,1);
	myBoard.placePiece(0,2);
	ASSERT_EQ(myBoard.getWinner(),O);
}

TEST(TicTacToeBoardTest, getWinnerBlank)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.getWinner(), Invalid);
}