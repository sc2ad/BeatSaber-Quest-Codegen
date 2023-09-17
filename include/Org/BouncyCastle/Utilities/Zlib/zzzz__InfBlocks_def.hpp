#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfTree;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Type: Org.BouncyCastle.Utilities.Zlib::InfBlocks
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1820))
// CS Name: Org.BouncyCastle.Utilities.Zlib.InfBlocks
class CORDL_TYPE InfBlocks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~InfBlocks() = default;

// Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: " const&", def_value: None }]
constexpr InfBlocks(InfBlocks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: "&&", def_value: None }]
constexpr InfBlocks(InfBlocks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InfBlocks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InfBlocks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InfBlocks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InfBlocks& operator=(InfBlocks&& o) noexcept = default;
  constexpr InfBlocks& operator=(InfBlocks const& o) noexcept = default;
                


// Fields

/// @brief Field MANY offset 0
static constexpr int32_t  MANY{1440};

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

/// @brief Field TYPE offset 0
static constexpr int32_t  TYPE{0};

/// @brief Field LENS offset 0
static constexpr int32_t  LENS{1};

/// @brief Field STORED offset 0
static constexpr int32_t  STORED{2};

/// @brief Field TABLE offset 0
static constexpr int32_t  TABLE{3};

/// @brief Field BTREE offset 0
static constexpr int32_t  BTREE{4};

/// @brief Field DTREE offset 0
static constexpr int32_t  DTREE{5};

/// @brief Field CODES offset 0
static constexpr int32_t  CODES{6};

/// @brief Field DRY offset 0
static constexpr int32_t  DRY{7};

/// @brief Field DONE offset 0
static constexpr int32_t  DONE{8};

/// @brief Field BAD offset 0
static constexpr int32_t  BAD{9};

static ::ArrayW<int32_t> __declspec(property(get=__get_inflate_mask, put=__set_inflate_mask))  inflate_mask;

static void __set_inflate_mask(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_inflate_mask() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_border, put=__set_border))  border;

static void __set_border(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_border() ;

 int32_t __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(int32_t value) ;

constexpr int32_t __get_mode() const;

 int32_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(int32_t value) ;

constexpr int32_t __get_left() const;

 int32_t __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(int32_t value) ;

constexpr int32_t __get_table() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_blens, put=__set_blens))  blens;

constexpr void __set_blens(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_blens() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_bb, put=__set_bb))  bb;

constexpr void __set_bb(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_bb() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_tb, put=__set_tb))  tb;

constexpr void __set_tb(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_tb() const;

 ::Org::BouncyCastle::Utilities::Zlib::InfCodes __declspec(property(get=__get_codes, put=__set_codes))  codes;

constexpr void __set_codes(::Org::BouncyCastle::Utilities::Zlib::InfCodes value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::InfCodes __get_codes() const;

 int32_t __declspec(property(get=__get_last, put=__set_last))  last;

constexpr void __set_last(int32_t value) ;

constexpr int32_t __get_last() const;

 int32_t __declspec(property(get=__get_bitk, put=__set_bitk))  bitk;

constexpr void __set_bitk(int32_t value) ;

constexpr int32_t __get_bitk() const;

 int32_t __declspec(property(get=__get_bitb, put=__set_bitb))  bitb;

constexpr void __set_bitb(int32_t value) ;

constexpr int32_t __get_bitb() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_hufts, put=__set_hufts))  hufts;

constexpr void __set_hufts(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_hufts() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_window, put=__set_window))  window;

constexpr void __set_window(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_window() const;

 int32_t __declspec(property(get=__get_end, put=__set_end))  end;

constexpr void __set_end(int32_t value) ;

constexpr int32_t __get_end() const;

 int32_t __declspec(property(get=__get_read, put=__set_read))  read;

constexpr void __set_read(int32_t value) ;

constexpr int32_t __get_read() const;

 int32_t __declspec(property(get=__get_write, put=__set_write))  write;

constexpr void __set_write(int32_t value) ;

constexpr int32_t __get_write() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_checkfn, put=__set_checkfn))  checkfn;

constexpr void __set_checkfn(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_checkfn() const;

 int64_t __declspec(property(get=__get_check, put=__set_check))  check;

constexpr void __set_check(int64_t value) ;

constexpr int64_t __get_check() const;

 ::Org::BouncyCastle::Utilities::Zlib::InfTree __declspec(property(get=__get_inftree, put=__set_inftree))  inftree;

constexpr void __set_inftree(::Org::BouncyCastle::Utilities::Zlib::InfTree value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::InfTree __get_inftree() const;


// Methods

// Ctor Parameters [CppParam { name: "z", ty: "::Org::BouncyCastle::Utilities::Zlib::ZStream", modifiers: "", def_value: None }, CppParam { name: "checkfn", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }]
explicit InfBlocks(::Org::BouncyCastle::Utilities::Zlib::ZStream z, ::bs_hook::Il2CppWrapperType checkfn, int32_t w) ;

/// @brief Method .ctor addr 0x10d93a8 size 0x148 virtual false final false
 void _ctor(::Org::BouncyCastle::Utilities::Zlib::ZStream z, ::bs_hook::Il2CppWrapperType checkfn, int32_t w) ;

/// @brief Method reset addr 0x10d9510 size 0x90 virtual false final false
 void reset(::Org::BouncyCastle::Utilities::Zlib::ZStream z, ::ArrayW<int64_t> c) ;

/// @brief Method proc addr 0x10d95a4 size 0x10b0 virtual false final false
 int32_t proc(::Org::BouncyCastle::Utilities::Zlib::ZStream z, int32_t r) ;

/// @brief Method free addr 0x10db630 size 0x1c virtual false final false
 void free(::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method set_dictionary addr 0x10db64c size 0x40 virtual false final false
 void set_dictionary(::ArrayW<uint8_t> d, int32_t start, int32_t n) ;

/// @brief Method sync_point addr 0x10db68c size 0x10 virtual false final false
 int32_t sync_point() ;

/// @brief Method inflate_flush addr 0x10da654 size 0x180 virtual false final false
 int32_t inflate_flush(::Org::BouncyCastle::Utilities::Zlib::ZStream z, int32_t r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfBlocks);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, "Org.BouncyCastle.Utilities.Zlib", "InfBlocks");
