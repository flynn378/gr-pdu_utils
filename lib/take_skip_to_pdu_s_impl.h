/* -*- c++ -*- */
/*
 * Copyright 2018 National Technology & Engineering Solutions of Sandia, LLC (NTESS). Under the terms of Contract DE-NA0003525 with NTESS, the U.S. Government retains certain rights in this software.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

 /* WARNING: this file is machine generated. Edits will be overwritten */

#ifndef INCLUDED_PDU_UTILS_TAKE_SKIP_TO_PDU_S_IMPL_H
#define INCLUDED_PDU_UTILS_TAKE_SKIP_TO_PDU_S_IMPL_H

#include <pdu_utils/take_skip_to_pdu_s.h>
#include <pdu_utils/constants.h>

namespace gr {
  namespace pdu_utils {

    class take_skip_to_pdu_s_impl : public take_skip_to_pdu_s
    {
     private:
      std::vector<short> d_vector;
      uint32_t d_take;
      uint32_t d_skip;
      uint64_t d_next;
      uint64_t d_burst_counter;
      bool d_triggered;
      uint8_t d_prev_byte;
      pmt::pmt_t d_meta_dict;

      void publish_message(void);

     public:
      take_skip_to_pdu_s_impl(uint32_t take, uint32_t skip);
      ~take_skip_to_pdu_s_impl();

      void set_take(uint32_t take);
      void set_skip(uint32_t skip);

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace pdu_utils
} // namespace gr

#endif /* INCLUDED_PDU_UTILS_TAKE_SKIP_TO_PDU_S_IMPL_H */
