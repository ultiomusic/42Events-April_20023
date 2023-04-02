/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:48:53 by beeligul          #+#    #+#             */
/*   Updated: 2023/04/02 15:48:54 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    int hand_value = 0;
    int num_aces = 0;
    char *cards = argv[1];
    int card_index = 0;

    while (cards[card_index] != '\0') {
        char card = cards[card_index];

        if (card >= '2' && card <= '9') {
            hand_value += card - '0';
        } else if (card == 'T' || card == 'J' || card == 'Q' || card == 'K') {
            hand_value += 10;
        } else if (card == 'A') {
            num_aces++;
            hand_value += 11;
        }

        card_index++;
    }

    while (num_aces > 0 && hand_value > 21) {
        hand_value -= 10;
        num_aces--;
    }

    if (hand_value == 21) {
        printf("Blackjack!\n");
    } else {
        printf("%d\n", hand_value);
    }

    return 0;
}

