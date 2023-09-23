#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Zlib {
class Adler32;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Inflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Type: Org.BouncyCastle.Utilities.Zlib::ZStream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1830))
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZStream
class CORDL_TYPE ZStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ZStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: " const&", def_value: None }]
constexpr ZStream(ZStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: "&&", def_value: None }]
constexpr ZStream(ZStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZStream& operator=(ZStream&& o) noexcept = default;
  constexpr ZStream& operator=(ZStream const& o) noexcept = default;
                


// Fields

/// @brief Field MAX_WBITS offset 0
static constexpr int32_t  MAX_WBITS{15};

/// @brief Field DEF_WBITS offset 0
static constexpr int32_t  DEF_WBITS{15};

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

/// @brief Field MAX_MEM_LEVEL offset 0
static constexpr int32_t  MAX_MEM_LEVEL{9};

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

 ::ArrayW<uint8_t> __declspec(property(get=__get_next_in, put=__set_next_in))  next_in;

constexpr void __set_next_in(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_next_in() const;

 int32_t __declspec(property(get=__get_next_in_index, put=__set_next_in_index))  next_in_index;

constexpr void __set_next_in_index(int32_t value) ;

constexpr int32_t __get_next_in_index() const;

 int32_t __declspec(property(get=__get_avail_in, put=__set_avail_in))  avail_in;

constexpr void __set_avail_in(int32_t value) ;

constexpr int32_t __get_avail_in() const;

 int64_t __declspec(property(get=__get_total_in, put=__set_total_in))  total_in;

constexpr void __set_total_in(int64_t value) ;

constexpr int64_t __get_total_in() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_next_out, put=__set_next_out))  next_out;

constexpr void __set_next_out(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_next_out() const;

 int32_t __declspec(property(get=__get_next_out_index, put=__set_next_out_index))  next_out_index;

constexpr void __set_next_out_index(int32_t value) ;

constexpr int32_t __get_next_out_index() const;

 int32_t __declspec(property(get=__get_avail_out, put=__set_avail_out))  avail_out;

constexpr void __set_avail_out(int32_t value) ;

constexpr int32_t __get_avail_out() const;

 int64_t __declspec(property(get=__get_total_out, put=__set_total_out))  total_out;

constexpr void __set_total_out(int64_t value) ;

constexpr int64_t __get_total_out() const;

 ::StringW __declspec(property(get=__get_msg, put=__set_msg))  msg;

constexpr void __set_msg(::StringW value) ;

constexpr ::StringW __get_msg() const;

 Org::BouncyCastle::Utilities::Zlib::Deflate __declspec(property(get=__get_dstate, put=__set_dstate))  dstate;

constexpr void __set_dstate(Org::BouncyCastle::Utilities::Zlib::Deflate value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Deflate __get_dstate() const;

 Org::BouncyCastle::Utilities::Zlib::Inflate __declspec(property(get=__get_istate, put=__set_istate))  istate;

constexpr void __set_istate(Org::BouncyCastle::Utilities::Zlib::Inflate value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Inflate __get_istate() const;

 int32_t __declspec(property(get=__get_data_type, put=__set_data_type))  data_type;

constexpr void __set_data_type(int32_t value) ;

constexpr int32_t __get_data_type() const;

 int64_t __declspec(property(get=__get_adler, put=__set_adler))  adler;

constexpr void __set_adler(int64_t value) ;

constexpr int64_t __get_adler() const;

 Org::BouncyCastle::Utilities::Zlib::Adler32 __declspec(property(get=__get__adler, put=__set__adler))  _adler;

constexpr void __set__adler(Org::BouncyCastle::Utilities::Zlib::Adler32 value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::Adler32 __get__adler() const;


// Methods

/// @brief Method inflateInit addr 0x10df21c size 0xc virtual false final false
 int32_t inflateInit() ;

/// @brief Method inflateInit addr 0x10ded18 size 0xc virtual false final false
 int32_t inflateInit(bool nowrap) ;

/// @brief Method inflateInit addr 0x10df808 size 0x8 virtual false final false
 int32_t inflateInit(int32_t w) ;

/// @brief Method inflateInit addr 0x10df810 size 0x7c virtual false final false
 int32_t inflateInit(int32_t w, bool nowrap) ;

/// @brief Method inflate addr 0x10deefc size 0x1c virtual false final false
 int32_t inflate(int32_t f) ;

/// @brief Method inflateEnd addr 0x10df88c size 0x50 virtual false final false
 int32_t inflateEnd() ;

/// @brief Method inflateSync addr 0x10df8dc size 0x18 virtual false final false
 int32_t inflateSync() ;

/// @brief Method inflateSetDictionary addr 0x10df8f4 size 0x20 virtual false final false
 int32_t inflateSetDictionary(::ArrayW<uint8_t> dictionary, int32_t dictLength) ;

/// @brief Method deflateInit addr 0x10df914 size 0xc virtual false final false
 int32_t deflateInit(int32_t level) ;

/// @brief Method deflateInit addr 0x10de690 size 0xc virtual false final false
 int32_t deflateInit(int32_t level, bool nowrap) ;

/// @brief Method deflateInit addr 0x10df920 size 0x8 virtual false final false
 int32_t deflateInit(int32_t level, int32_t bits) ;

/// @brief Method deflateInit addr 0x10df928 size 0x94 virtual false final false
 int32_t deflateInit(int32_t level, int32_t bits, bool nowrap) ;

/// @brief Method deflate addr 0x10de800 size 0x24 virtual false final false
 int32_t deflate(int32_t flush) ;

/// @brief Method deflateEnd addr 0x10dea28 size 0x30 virtual false final false
 int32_t deflateEnd() ;

/// @brief Method deflateParams addr 0x10df9bc size 0x28 virtual false final false
 int32_t deflateParams(int32_t level, int32_t strategy) ;

/// @brief Method deflateSetDictionary addr 0x10df9e4 size 0x28 virtual false final false
 int32_t deflateSetDictionary(::ArrayW<uint8_t> dictionary, int32_t dictLength) ;

/// @brief Method flush_pending addr 0x10dfa0c size 0xbc virtual false final false
 void flush_pending() ;

/// @brief Method read_buf addr 0x10dfac8 size 0xb0 virtual false final false
 int32_t read_buf(::ArrayW<uint8_t> buf, int32_t start, int32_t size) ;

/// @brief Method free addr 0x10dea58 size 0x14 virtual false final false
 void free() ;

// Ctor Parameters []
explicit ZStream() ;

/// @brief Method .ctor addr 0x10de628 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::ZStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::ZStream, "Org.BouncyCastle.Utilities.Zlib", "ZStream");
