#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReassembler;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range;
}
// Type: ::Range
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1227))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReassembler::Range
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range(____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range(____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range& operator=(____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range& operator=(____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mStart, put=__set_mStart))  mStart;

constexpr void __set_mStart(int32_t value) ;

constexpr int32_t __get_mStart() const;

 int32_t __declspec(property(get=__get_mEnd, put=__set_mEnd))  mEnd;

constexpr void __set_mEnd(int32_t value) ;

constexpr int32_t __get_mEnd() const;


// Properties

 int32_t __declspec(property(get=get_Start, put=set_Start))  Start;

 int32_t __declspec(property(get=get_End, put=set_End))  End;


// Methods

// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range(int32_t start, int32_t end) ;

/// @brief Method .ctor addr 0xede650 size 0x2c virtual false final false
 void _ctor(int32_t start, int32_t end) ;

/// @brief Method get_Start addr 0xedee40 size 0x8 virtual false final false
 int32_t get_Start() ;

/// @brief Method set_Start addr 0xedee48 size 0x8 virtual false final false
 void set_Start(int32_t value) ;

/// @brief Method get_End addr 0xedee50 size 0x8 virtual false final false
 int32_t get_End() ;

/// @brief Method set_End addr 0xedee58 size 0x8 virtual false final false
 void set_End(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReassembler
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1228))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReassembler
class CORDL_TYPE DtlsReassembler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Range = ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DtlsReassembler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: " const&", def_value: None }]
constexpr DtlsReassembler(DtlsReassembler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: "&&", def_value: None }]
constexpr DtlsReassembler(DtlsReassembler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsReassembler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsReassembler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsReassembler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsReassembler& operator=(DtlsReassembler&& o) noexcept = default;
  constexpr DtlsReassembler& operator=(DtlsReassembler const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mMsgType, put=__set_mMsgType))  mMsgType;

constexpr void __set_mMsgType(uint8_t value) ;

constexpr uint8_t __get_mMsgType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mBody, put=__set_mBody))  mBody;

constexpr void __set_mBody(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mBody() const;

 ::System::Collections::IList __declspec(property(get=__get_mMissing, put=__set_mMissing))  mMissing;

constexpr void __set_mMissing(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mMissing() const;


// Properties

 uint8_t __declspec(property(get=get_MsgType))  MsgType;


// Methods

// Ctor Parameters [CppParam { name: "msg_type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit DtlsReassembler(uint8_t msg_type, int32_t length) ;

/// @brief Method .ctor addr 0xede504 size 0x14c virtual false final false
 void _ctor(uint8_t msg_type, int32_t length) ;

/// @brief Method get_MsgType addr 0xede67c size 0x8 virtual false final false
 uint8_t get_MsgType() ;

/// @brief Method GetBodyIfComplete addr 0xede684 size 0xb8 virtual false final false
 ::ArrayW<uint8_t> GetBodyIfComplete() ;

/// @brief Method ContributeFragment addr 0xede73c size 0x5b4 virtual false final false
 void ContributeFragment(uint8_t msg_type, int32_t length, ::ArrayW<uint8_t> buf, int32_t off, int32_t fragment_offset, int32_t fragment_length) ;

/// @brief Method Reset addr 0xedecf0 size 0x150 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsReassembler__Range, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler/Range");
