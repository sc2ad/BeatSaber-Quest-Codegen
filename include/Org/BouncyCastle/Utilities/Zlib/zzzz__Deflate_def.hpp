#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Tree;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Org__BouncyCastle__Utilities__Zlib__Deflate__Config;
}
// Type: ::Config
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1818))
// CS Name: Org.BouncyCastle.Utilities.Zlib.Deflate::Config
class CORDL_TYPE Org__BouncyCastle__Utilities__Zlib__Deflate__Config : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Utilities__Zlib__Deflate__Config() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Utilities__Zlib__Deflate__Config", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config(Org__BouncyCastle__Utilities__Zlib__Deflate__Config const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Utilities__Zlib__Deflate__Config", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config(Org__BouncyCastle__Utilities__Zlib__Deflate__Config&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Utilities__Zlib__Deflate__Config(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config& operator=(Org__BouncyCastle__Utilities__Zlib__Deflate__Config&& o) noexcept = default;
  constexpr Org__BouncyCastle__Utilities__Zlib__Deflate__Config& operator=(Org__BouncyCastle__Utilities__Zlib__Deflate__Config const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_good_length, put=__set_good_length))  good_length;

constexpr void __set_good_length(int32_t value) ;

constexpr int32_t __get_good_length() const;

 int32_t __declspec(property(get=__get_max_lazy, put=__set_max_lazy))  max_lazy;

constexpr void __set_max_lazy(int32_t value) ;

constexpr int32_t __get_max_lazy() const;

 int32_t __declspec(property(get=__get_nice_length, put=__set_nice_length))  nice_length;

constexpr void __set_nice_length(int32_t value) ;

constexpr int32_t __get_nice_length() const;

 int32_t __declspec(property(get=__get_max_chain, put=__set_max_chain))  max_chain;

constexpr void __set_max_chain(int32_t value) ;

constexpr int32_t __get_max_chain() const;

 int32_t __declspec(property(get=__get_func, put=__set_func))  func;

constexpr void __set_func(int32_t value) ;

constexpr int32_t __get_func() const;


// Methods

// Ctor Parameters [CppParam { name: "good_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max_lazy", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nice_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max_chain", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "func", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Utilities__Zlib__Deflate__Config(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func) ;

/// @brief Method .ctor addr 0x10d9358 size 0x50 virtual false final false
 void _ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
// Type: Org.BouncyCastle.Utilities.Zlib::Deflate
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1819))
// CS Name: Org.BouncyCastle.Utilities.Zlib.Deflate
class CORDL_TYPE Deflate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Config = Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~Deflate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Deflate", modifiers: " const&", def_value: None }]
constexpr Deflate(Deflate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Deflate", modifiers: "&&", def_value: None }]
constexpr Deflate(Deflate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Deflate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Deflate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Deflate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Deflate& operator=(Deflate&& o) noexcept = default;
  constexpr Deflate& operator=(Deflate const& o) noexcept = default;
                


// Fields

/// @brief Field MAX_MEM_LEVEL offset 0
static constexpr int32_t  MAX_MEM_LEVEL{9};

/// @brief Field Z_DEFAULT_COMPRESSION offset 0
static constexpr int32_t  Z_DEFAULT_COMPRESSION{-1};

/// @brief Field MAX_WBITS offset 0
static constexpr int32_t  MAX_WBITS{15};

/// @brief Field DEF_MEM_LEVEL offset 0
static constexpr int32_t  DEF_MEM_LEVEL{8};

/// @brief Field STORED offset 0
static constexpr int32_t  STORED{0};

/// @brief Field FAST offset 0
static constexpr int32_t  FAST{1};

/// @brief Field SLOW offset 0
static constexpr int32_t  SLOW{2};

/// @brief Field NeedMore offset 0
static constexpr int32_t  NeedMore{0};

/// @brief Field BlockDone offset 0
static constexpr int32_t  BlockDone{1};

/// @brief Field FinishStarted offset 0
static constexpr int32_t  FinishStarted{2};

/// @brief Field FinishDone offset 0
static constexpr int32_t  FinishDone{3};

/// @brief Field PRESET_DICT offset 0
static constexpr int32_t  PRESET_DICT{32};

/// @brief Field Z_FILTERED offset 0
static constexpr int32_t  Z_FILTERED{1};

/// @brief Field Z_HUFFMAN_ONLY offset 0
static constexpr int32_t  Z_HUFFMAN_ONLY{2};

/// @brief Field Z_DEFAULT_STRATEGY offset 0
static constexpr int32_t  Z_DEFAULT_STRATEGY{0};

/// @brief Field Z_NO_FLUSH offset 0
static constexpr int32_t  Z_NO_FLUSH{0};

/// @brief Field Z_PARTIAL_FLUSH offset 0
static constexpr int32_t  Z_PARTIAL_FLUSH{1};

/// @brief Field Z_SYNC_FLUSH offset 0
static constexpr int32_t  Z_SYNC_FLUSH{2};

/// @brief Field Z_FULL_FLUSH offset 0
static constexpr int32_t  Z_FULL_FLUSH{3};

/// @brief Field Z_FINISH offset 0
static constexpr int32_t  Z_FINISH{4};

/// @brief Field Z_OK offset 0
static constexpr int32_t  Z_OK{0};

/// @brief Field Z_STREAM_END offset 0
static constexpr int32_t  Z_STREAM_END{1};

/// @brief Field Z_NEED_DICT offset 0
static constexpr int32_t  Z_NEED_DICT{2};

/// @brief Field Z_ERRNO offset 0
static constexpr int32_t  Z_ERRNO{-1};

/// @brief Field Z_STREAM_ERROR offset 0
static constexpr int32_t  Z_STREAM_ERROR{-2};

/// @brief Field Z_DATA_ERROR offset 0
static constexpr int32_t  Z_DATA_ERROR{-3};

/// @brief Field Z_MEM_ERROR offset 0
static constexpr int32_t  Z_MEM_ERROR{-4};

/// @brief Field Z_BUF_ERROR offset 0
static constexpr int32_t  Z_BUF_ERROR{-5};

/// @brief Field Z_VERSION_ERROR offset 0
static constexpr int32_t  Z_VERSION_ERROR{-6};

/// @brief Field INIT_STATE offset 0
static constexpr int32_t  INIT_STATE{42};

/// @brief Field BUSY_STATE offset 0
static constexpr int32_t  BUSY_STATE{113};

/// @brief Field FINISH_STATE offset 0
static constexpr int32_t  FINISH_STATE{666};

/// @brief Field Z_DEFLATED offset 0
static constexpr int32_t  Z_DEFLATED{8};

/// @brief Field STORED_BLOCK offset 0
static constexpr int32_t  STORED_BLOCK{0};

/// @brief Field STATIC_TREES offset 0
static constexpr int32_t  STATIC_TREES{1};

/// @brief Field DYN_TREES offset 0
static constexpr int32_t  DYN_TREES{2};

/// @brief Field Z_BINARY offset 0
static constexpr int32_t  Z_BINARY{0};

/// @brief Field Z_ASCII offset 0
static constexpr int32_t  Z_ASCII{1};

/// @brief Field Z_UNKNOWN offset 0
static constexpr int32_t  Z_UNKNOWN{2};

/// @brief Field Buf_size offset 0
static constexpr int32_t  Buf_size{16};

/// @brief Field REP_3_6 offset 0
static constexpr int32_t  REP_3_6{16};

/// @brief Field REPZ_3_10 offset 0
static constexpr int32_t  REPZ_3_10{17};

/// @brief Field REPZ_11_138 offset 0
static constexpr int32_t  REPZ_11_138{18};

/// @brief Field MIN_MATCH offset 0
static constexpr int32_t  MIN_MATCH{3};

/// @brief Field MAX_MATCH offset 0
static constexpr int32_t  MAX_MATCH{258};

/// @brief Field MIN_LOOKAHEAD offset 0
static constexpr int32_t  MIN_LOOKAHEAD{262};

/// @brief Field MAX_BITS offset 0
static constexpr int32_t  MAX_BITS{15};

/// @brief Field D_CODES offset 0
static constexpr int32_t  D_CODES{30};

/// @brief Field BL_CODES offset 0
static constexpr int32_t  BL_CODES{19};

/// @brief Field LENGTH_CODES offset 0
static constexpr int32_t  LENGTH_CODES{29};

/// @brief Field LITERALS offset 0
static constexpr int32_t  LITERALS{256};

/// @brief Field L_CODES offset 0
static constexpr int32_t  L_CODES{286};

/// @brief Field HEAP_SIZE offset 0
static constexpr int32_t  HEAP_SIZE{573};

/// @brief Field END_BLOCK offset 0
static constexpr int32_t  END_BLOCK{256};

static ::ArrayW<Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config> __declspec(property(get=__get_config_table, put=__set_config_table))  config_table;

static void __set_config_table(::ArrayW<Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config> value) ;

static ::ArrayW<Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config> __get_config_table() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_z_errmsg, put=__set_z_errmsg))  z_errmsg;

static void __set_z_errmsg(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_z_errmsg() ;

 Org::BouncyCastle::Utilities::Zlib::ZStream __declspec(property(get=__get_strm, put=__set_strm))  strm;

constexpr void __set_strm(Org::BouncyCastle::Utilities::Zlib::ZStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZStream __get_strm() const;

 int32_t __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(int32_t value) ;

constexpr int32_t __get_status() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_pending_buf, put=__set_pending_buf))  pending_buf;

constexpr void __set_pending_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_pending_buf() const;

 int32_t __declspec(property(get=__get_pending_out, put=__set_pending_out))  pending_out;

constexpr void __set_pending_out(int32_t value) ;

constexpr int32_t __get_pending_out() const;

 int32_t __declspec(property(get=__get_pending, put=__set_pending))  pending;

constexpr void __set_pending(int32_t value) ;

constexpr int32_t __get_pending() const;

 int32_t __declspec(property(get=__get_noheader, put=__set_noheader))  noheader;

constexpr void __set_noheader(int32_t value) ;

constexpr int32_t __get_noheader() const;

 uint8_t __declspec(property(get=__get_data_type, put=__set_data_type))  data_type;

constexpr void __set_data_type(uint8_t value) ;

constexpr uint8_t __get_data_type() const;

 uint8_t __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(uint8_t value) ;

constexpr uint8_t __get_method() const;

 int32_t __declspec(property(get=__get_last_flush, put=__set_last_flush))  last_flush;

constexpr void __set_last_flush(int32_t value) ;

constexpr int32_t __get_last_flush() const;

 int32_t __declspec(property(get=__get_w_size, put=__set_w_size))  w_size;

constexpr void __set_w_size(int32_t value) ;

constexpr int32_t __get_w_size() const;

 int32_t __declspec(property(get=__get_w_bits, put=__set_w_bits))  w_bits;

constexpr void __set_w_bits(int32_t value) ;

constexpr int32_t __get_w_bits() const;

 int32_t __declspec(property(get=__get_w_mask, put=__set_w_mask))  w_mask;

constexpr void __set_w_mask(int32_t value) ;

constexpr int32_t __get_w_mask() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_window, put=__set_window))  window;

constexpr void __set_window(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_window() const;

 int32_t __declspec(property(get=__get_window_size, put=__set_window_size))  window_size;

constexpr void __set_window_size(int32_t value) ;

constexpr int32_t __get_window_size() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_prev() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_head() const;

 int32_t __declspec(property(get=__get_ins_h, put=__set_ins_h))  ins_h;

constexpr void __set_ins_h(int32_t value) ;

constexpr int32_t __get_ins_h() const;

 int32_t __declspec(property(get=__get_hash_size, put=__set_hash_size))  hash_size;

constexpr void __set_hash_size(int32_t value) ;

constexpr int32_t __get_hash_size() const;

 int32_t __declspec(property(get=__get_hash_bits, put=__set_hash_bits))  hash_bits;

constexpr void __set_hash_bits(int32_t value) ;

constexpr int32_t __get_hash_bits() const;

 int32_t __declspec(property(get=__get_hash_mask, put=__set_hash_mask))  hash_mask;

constexpr void __set_hash_mask(int32_t value) ;

constexpr int32_t __get_hash_mask() const;

 int32_t __declspec(property(get=__get_hash_shift, put=__set_hash_shift))  hash_shift;

constexpr void __set_hash_shift(int32_t value) ;

constexpr int32_t __get_hash_shift() const;

 int32_t __declspec(property(get=__get_block_start, put=__set_block_start))  block_start;

constexpr void __set_block_start(int32_t value) ;

constexpr int32_t __get_block_start() const;

 int32_t __declspec(property(get=__get_match_length, put=__set_match_length))  match_length;

constexpr void __set_match_length(int32_t value) ;

constexpr int32_t __get_match_length() const;

 int32_t __declspec(property(get=__get_prev_match, put=__set_prev_match))  prev_match;

constexpr void __set_prev_match(int32_t value) ;

constexpr int32_t __get_prev_match() const;

 int32_t __declspec(property(get=__get_match_available, put=__set_match_available))  match_available;

constexpr void __set_match_available(int32_t value) ;

constexpr int32_t __get_match_available() const;

 int32_t __declspec(property(get=__get_strstart, put=__set_strstart))  strstart;

constexpr void __set_strstart(int32_t value) ;

constexpr int32_t __get_strstart() const;

 int32_t __declspec(property(get=__get_match_start, put=__set_match_start))  match_start;

constexpr void __set_match_start(int32_t value) ;

constexpr int32_t __get_match_start() const;

 int32_t __declspec(property(get=__get_lookahead, put=__set_lookahead))  lookahead;

constexpr void __set_lookahead(int32_t value) ;

constexpr int32_t __get_lookahead() const;

 int32_t __declspec(property(get=__get_prev_length, put=__set_prev_length))  prev_length;

constexpr void __set_prev_length(int32_t value) ;

constexpr int32_t __get_prev_length() const;

 int32_t __declspec(property(get=__get_max_chain_length, put=__set_max_chain_length))  max_chain_length;

constexpr void __set_max_chain_length(int32_t value) ;

constexpr int32_t __get_max_chain_length() const;

 int32_t __declspec(property(get=__get_max_lazy_match, put=__set_max_lazy_match))  max_lazy_match;

constexpr void __set_max_lazy_match(int32_t value) ;

constexpr int32_t __get_max_lazy_match() const;

 int32_t __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(int32_t value) ;

constexpr int32_t __get_level() const;

 int32_t __declspec(property(get=__get_strategy, put=__set_strategy))  strategy;

constexpr void __set_strategy(int32_t value) ;

constexpr int32_t __get_strategy() const;

 int32_t __declspec(property(get=__get_good_match, put=__set_good_match))  good_match;

constexpr void __set_good_match(int32_t value) ;

constexpr int32_t __get_good_match() const;

 int32_t __declspec(property(get=__get_nice_match, put=__set_nice_match))  nice_match;

constexpr void __set_nice_match(int32_t value) ;

constexpr int32_t __get_nice_match() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_dyn_ltree, put=__set_dyn_ltree))  dyn_ltree;

constexpr void __set_dyn_ltree(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_dyn_ltree() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_dyn_dtree, put=__set_dyn_dtree))  dyn_dtree;

constexpr void __set_dyn_dtree(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_dyn_dtree() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_bl_tree, put=__set_bl_tree))  bl_tree;

constexpr void __set_bl_tree(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_bl_tree() const;

 Org::BouncyCastle::Utilities::Zlib::Tree __declspec(property(get=__get_l_desc, put=__set_l_desc))  l_desc;

constexpr void __set_l_desc(Org::BouncyCastle::Utilities::Zlib::Tree value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Tree __get_l_desc() const;

 Org::BouncyCastle::Utilities::Zlib::Tree __declspec(property(get=__get_d_desc, put=__set_d_desc))  d_desc;

constexpr void __set_d_desc(Org::BouncyCastle::Utilities::Zlib::Tree value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Tree __get_d_desc() const;

 Org::BouncyCastle::Utilities::Zlib::Tree __declspec(property(get=__get_bl_desc, put=__set_bl_desc))  bl_desc;

constexpr void __set_bl_desc(Org::BouncyCastle::Utilities::Zlib::Tree value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Tree __get_bl_desc() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_bl_count, put=__set_bl_count))  bl_count;

constexpr void __set_bl_count(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_bl_count() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_heap, put=__set_heap))  heap;

constexpr void __set_heap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_heap() const;

 int32_t __declspec(property(get=__get_heap_len, put=__set_heap_len))  heap_len;

constexpr void __set_heap_len(int32_t value) ;

constexpr int32_t __get_heap_len() const;

 int32_t __declspec(property(get=__get_heap_max, put=__set_heap_max))  heap_max;

constexpr void __set_heap_max(int32_t value) ;

constexpr int32_t __get_heap_max() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_depth() const;

 int32_t __declspec(property(get=__get_l_buf, put=__set_l_buf))  l_buf;

constexpr void __set_l_buf(int32_t value) ;

constexpr int32_t __get_l_buf() const;

 int32_t __declspec(property(get=__get_lit_bufsize, put=__set_lit_bufsize))  lit_bufsize;

constexpr void __set_lit_bufsize(int32_t value) ;

constexpr int32_t __get_lit_bufsize() const;

 int32_t __declspec(property(get=__get_last_lit, put=__set_last_lit))  last_lit;

constexpr void __set_last_lit(int32_t value) ;

constexpr int32_t __get_last_lit() const;

 int32_t __declspec(property(get=__get_d_buf, put=__set_d_buf))  d_buf;

constexpr void __set_d_buf(int32_t value) ;

constexpr int32_t __get_d_buf() const;

 int32_t __declspec(property(get=__get_opt_len, put=__set_opt_len))  opt_len;

constexpr void __set_opt_len(int32_t value) ;

constexpr int32_t __get_opt_len() const;

 int32_t __declspec(property(get=__get_static_len, put=__set_static_len))  static_len;

constexpr void __set_static_len(int32_t value) ;

constexpr int32_t __get_static_len() const;

 int32_t __declspec(property(get=__get_matches, put=__set_matches))  matches;

constexpr void __set_matches(int32_t value) ;

constexpr int32_t __get_matches() const;

 int32_t __declspec(property(get=__get_last_eob_len, put=__set_last_eob_len))  last_eob_len;

constexpr void __set_last_eob_len(int32_t value) ;

constexpr int32_t __get_last_eob_len() const;

 uint32_t __declspec(property(get=__get_bi_buf, put=__set_bi_buf))  bi_buf;

constexpr void __set_bi_buf(uint32_t value) ;

constexpr uint32_t __get_bi_buf() const;

 int32_t __declspec(property(get=__get_bi_valid, put=__set_bi_valid))  bi_valid;

constexpr void __set_bi_valid(int32_t value) ;

constexpr int32_t __get_bi_valid() const;


// Methods

// Ctor Parameters []
explicit Deflate() ;

/// @brief Method .ctor addr 0x10d538c size 0x148 virtual false final false
 void _ctor() ;

/// @brief Method lm_init addr 0x10d54d4 size 0x114 virtual false final false
 void lm_init() ;

/// @brief Method tr_init addr 0x10d55e8 size 0xbc virtual false final false
 void tr_init() ;

/// @brief Method init_block addr 0x10d56a4 size 0xb4 virtual false final false
 void init_block() ;

/// @brief Method pqdownheap addr 0x10d5758 size 0x1b4 virtual false final false
 void pqdownheap(::ArrayW<int16_t> tree, int32_t k) ;

/// @brief Method smaller addr 0x10d590c size 0x8c virtual false final false
static bool smaller(::ArrayW<int16_t> tree, int32_t n, int32_t m, ::ArrayW<uint8_t> depth) ;

/// @brief Method scan_tree addr 0x10d5998 size 0x194 virtual false final false
 void scan_tree(::ArrayW<int16_t> tree, int32_t max_code) ;

/// @brief Method build_bl_tree addr 0x10d5b2c size 0x11c virtual false final false
 int32_t build_bl_tree() ;

/// @brief Method send_all_trees addr 0x10d5c48 size 0x130 virtual false final false
 void send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes) ;

/// @brief Method send_tree addr 0x10d5e30 size 0x1a0 virtual false final false
 void send_tree(::ArrayW<int16_t> tree, int32_t max_code) ;

/// @brief Method put_byte addr 0x10d6014 size 0x48 virtual false final false
 void put_byte(::ArrayW<uint8_t> p, int32_t start, int32_t len) ;

/// @brief Method put_byte addr 0x10d605c size 0x3c virtual false final false
 void put_byte(uint8_t c) ;

/// @brief Method put_short addr 0x10d6098 size 0x68 virtual false final false
 void put_short(int32_t w) ;

/// @brief Method putShortMSB addr 0x10d6100 size 0x68 virtual false final false
 void putShortMSB(int32_t b) ;

/// @brief Method send_code addr 0x10d5fd0 size 0x44 virtual false final false
 void send_code(int32_t c, ::ArrayW<int16_t> tree) ;

/// @brief Method send_bits addr 0x10d5d78 size 0xb8 virtual false final false
 void send_bits(int32_t val, int32_t length) ;

/// @brief Method _tr_align addr 0x10d6168 size 0xe0 virtual false final false
 void _tr_align() ;

/// @brief Method _tr_tally addr 0x10d631c size 0x2a4 virtual false final false
 bool _tr_tally(int32_t dist, int32_t lc) ;

/// @brief Method compress_block addr 0x10d65c0 size 0x274 virtual false final false
 void compress_block(::ArrayW<int16_t> ltree, ::ArrayW<int16_t> dtree) ;

/// @brief Method set_data_type addr 0x10d6834 size 0xb0 virtual false final false
 void set_data_type() ;

/// @brief Method bi_flush addr 0x10d6248 size 0xd4 virtual false final false
 void bi_flush() ;

/// @brief Method bi_windup addr 0x10d68e4 size 0xb0 virtual false final false
 void bi_windup() ;

/// @brief Method copy_block addr 0x10d6994 size 0x80 virtual false final false
 void copy_block(int32_t buf, int32_t len, bool header) ;

/// @brief Method flush_block_only addr 0x10d6a14 size 0x4c virtual false final false
 void flush_block_only(bool eof) ;

/// @brief Method deflate_stored addr 0x10d6c18 size 0x164 virtual false final false
 int32_t deflate_stored(int32_t flush) ;

/// @brief Method _tr_stored_block addr 0x10d6f44 size 0x44 virtual false final false
 void _tr_stored_block(int32_t buf, int32_t stored_len, bool eof) ;

/// @brief Method _tr_flush_block addr 0x10d6a60 size 0x1b8 virtual false final false
 void _tr_flush_block(int32_t buf, int32_t stored_len, bool eof) ;

/// @brief Method fill_window addr 0x10d6d7c size 0x1c8 virtual false final false
 void fill_window() ;

/// @brief Method deflate_fast addr 0x10d6f88 size 0x31c virtual false final false
 int32_t deflate_fast(int32_t flush) ;

/// @brief Method deflate_slow addr 0x10d7650 size 0x3b4 virtual false final false
 int32_t deflate_slow(int32_t flush) ;

/// @brief Method longest_match addr 0x10d72a4 size 0x3ac virtual false final false
 int32_t longest_match(int32_t cur_match) ;

/// @brief Method deflateInit addr 0x10d7a04 size 0x14 virtual false final false
 int32_t deflateInit(Org::BouncyCastle::Utilities::Zlib::ZStream strm, int32_t level, int32_t bits) ;

/// @brief Method deflateInit addr 0x10d7bb8 size 0x14 virtual false final false
 int32_t deflateInit(Org::BouncyCastle::Utilities::Zlib::ZStream strm, int32_t level) ;

/// @brief Method deflateInit2 addr 0x10d7a18 size 0x1a0 virtual false final false
 int32_t deflateInit2(Org::BouncyCastle::Utilities::Zlib::ZStream strm, int32_t level, int32_t method, int32_t windowBits, int32_t memLevel, int32_t strategy) ;

/// @brief Method deflateReset addr 0x10d7bcc size 0x74 virtual false final false
 int32_t deflateReset(Org::BouncyCastle::Utilities::Zlib::ZStream strm) ;

/// @brief Method deflateEnd addr 0x10d7c40 size 0x44 virtual false final false
 int32_t deflateEnd() ;

/// @brief Method deflateParams addr 0x10d7c84 size 0x184 virtual false final false
 int32_t deflateParams(Org::BouncyCastle::Utilities::Zlib::ZStream strm, int32_t _level, int32_t _strategy) ;

/// @brief Method deflateSetDictionary addr 0x10d7e08 size 0x178 virtual false final false
 int32_t deflateSetDictionary(Org::BouncyCastle::Utilities::Zlib::ZStream strm, ::ArrayW<uint8_t> dictionary, int32_t dictLength) ;

/// @brief Method deflate addr 0x10d7f80 size 0x13d8 virtual false final false
 int32_t deflate(Org::BouncyCastle::Utilities::Zlib::ZStream strm, int32_t flush) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::Deflate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::Deflate, "Org.BouncyCastle.Utilities.Zlib", "Deflate");
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::Org__BouncyCastle__Utilities__Zlib__Deflate__Config, "Org.BouncyCastle.Utilities.Zlib", "Deflate/Config");
