#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Inflate;
}
// Type: Org.BouncyCastle.Utilities.Zlib::Inflate
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1822))
// CS Name: Org.BouncyCastle.Utilities.Zlib.Inflate
class CORDL_TYPE Inflate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Inflate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Inflate", modifiers: " const&", def_value: None }]
constexpr Inflate(Inflate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Inflate", modifiers: "&&", def_value: None }]
constexpr Inflate(Inflate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Inflate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Inflate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Inflate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Inflate& operator=(Inflate&& o) noexcept = default;
  constexpr Inflate& operator=(Inflate const& o) noexcept = default;
                


// Fields

/// @brief Field MAX_WBITS offset 0
static constexpr int32_t  MAX_WBITS{15};

/// @brief Field PRESET_DICT offset 0
static constexpr int32_t  PRESET_DICT{32};

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

/// @brief Field Z_DEFLATED offset 0
static constexpr int32_t  Z_DEFLATED{8};

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

/// @brief Field METHOD offset 0
static constexpr int32_t  METHOD{0};

/// @brief Field FLAG offset 0
static constexpr int32_t  FLAG{1};

/// @brief Field DICT4 offset 0
static constexpr int32_t  DICT4{2};

/// @brief Field DICT3 offset 0
static constexpr int32_t  DICT3{3};

/// @brief Field DICT2 offset 0
static constexpr int32_t  DICT2{4};

/// @brief Field DICT1 offset 0
static constexpr int32_t  DICT1{5};

/// @brief Field DICT0 offset 0
static constexpr int32_t  DICT0{6};

/// @brief Field BLOCKS offset 0
static constexpr int32_t  BLOCKS{7};

/// @brief Field CHECK4 offset 0
static constexpr int32_t  CHECK4{8};

/// @brief Field CHECK3 offset 0
static constexpr int32_t  CHECK3{9};

/// @brief Field CHECK2 offset 0
static constexpr int32_t  CHECK2{10};

/// @brief Field CHECK1 offset 0
static constexpr int32_t  CHECK1{11};

/// @brief Field DONE offset 0
static constexpr int32_t  DONE{12};

/// @brief Field BAD offset 0
static constexpr int32_t  BAD{13};

 int32_t __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(int32_t value) ;

constexpr int32_t __get_mode() const;

 int32_t __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(int32_t value) ;

constexpr int32_t __get_method() const;

 ::ArrayW<int64_t> __declspec(property(get=__get_was, put=__set_was))  was;

constexpr void __set_was(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_was() const;

 int64_t __declspec(property(get=__get_need, put=__set_need))  need;

constexpr void __set_need(int64_t value) ;

constexpr int64_t __get_need() const;

 int32_t __declspec(property(get=__get_marker, put=__set_marker))  marker;

constexpr void __set_marker(int32_t value) ;

constexpr int32_t __get_marker() const;

 int32_t __declspec(property(get=__get_nowrap, put=__set_nowrap))  nowrap;

constexpr void __set_nowrap(int32_t value) ;

constexpr int32_t __get_nowrap() const;

 int32_t __declspec(property(get=__get_wbits, put=__set_wbits))  wbits;

constexpr void __set_wbits(int32_t value) ;

constexpr int32_t __get_wbits() const;

 ::Org::BouncyCastle::Utilities::Zlib::InfBlocks __declspec(property(get=__get_blocks, put=__set_blocks))  blocks;

constexpr void __set_blocks(::Org::BouncyCastle::Utilities::Zlib::InfBlocks value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::InfBlocks __get_blocks() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_mark, put=__set_mark))  mark;

static void __set_mark(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_mark() ;


// Methods

/// @brief Method inflateReset addr 0x10dc060 size 0x54 virtual false final false
 int32_t inflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflateEnd addr 0x10dc0b4 size 0x38 virtual false final false
 int32_t inflateEnd(::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflateInit addr 0x10dc0ec size 0xd8 virtual false final false
 int32_t inflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream z, int32_t w) ;

/// @brief Method inflate addr 0x10dc1c4 size 0x670 virtual false final false
 int32_t inflate(::Org::BouncyCastle::Utilities::Zlib::ZStream z, int32_t f) ;

/// @brief Method inflateSetDictionary addr 0x10dc834 size 0x104 virtual false final false
 int32_t inflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream z, ::ArrayW<uint8_t> dictionary, int32_t dictLength) ;

/// @brief Method inflateSync addr 0x10dc938 size 0x1c0 virtual false final false
 int32_t inflateSync(::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflateSyncPoint addr 0x10dcaf8 size 0x2c virtual false final false
 int32_t inflateSyncPoint(::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

// Ctor Parameters []
explicit Inflate() ;

/// @brief Method .ctor addr 0x10dcbb8 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Inflate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Inflate, "Org.BouncyCastle.Utilities.Zlib", "Inflate");
