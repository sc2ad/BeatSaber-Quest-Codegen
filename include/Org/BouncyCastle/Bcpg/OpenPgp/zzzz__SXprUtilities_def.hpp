#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class SXprUtilities;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k;
}
// Type: ::MyS2k
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1676))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.SXprUtilities::MyS2k
class CORDL_TYPE ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k : public ::Org::BouncyCastle::Bcpg::S2k {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k(____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k(____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::S2k(ptr) {
}


  constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k& operator=(____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k& operator=(____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_mIterationCount64, put=__set_mIterationCount64))  mIterationCount64;

constexpr void __set_mIterationCount64(int64_t value) ;

constexpr int64_t __get_mIterationCount64() const;


// Properties

 int64_t __declspec(property(get=get_IterationCount))  IterationCount;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount64", ty: "int64_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int64_t iterationCount64) ;

/// @brief Method .ctor addr 0x1043b5c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int64_t iterationCount64) ;

/// @brief Method get_IterationCount addr 0x1043b84 size 0x8 virtual true final false
 int64_t get_IterationCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::SXprUtilities
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1677))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.SXprUtilities
class CORDL_TYPE SXprUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MyS2k = ::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SXprUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: " const&", def_value: None }]
constexpr SXprUtilities(SXprUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: "&&", def_value: None }]
constexpr SXprUtilities(SXprUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SXprUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SXprUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SXprUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SXprUtilities& operator=(SXprUtilities&& o) noexcept = default;
  constexpr SXprUtilities& operator=(SXprUtilities const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SXprUtilities() ;

/// @brief Method .ctor addr 0x1043ae0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ReadLength addr 0x1043ae8 size 0x74 virtual false final false
static int32_t ReadLength(::System::IO::Stream input, int32_t ch) ;

/// @brief Method ReadString addr 0x1036c44 size 0xc8 virtual false final false
static ::StringW ReadString(::System::IO::Stream input, int32_t ch) ;

/// @brief Method ReadBytes addr 0x1036d84 size 0x80 virtual false final false
static ::ArrayW<uint8_t> ReadBytes(::System::IO::Stream input, int32_t ch) ;

/// @brief Method ParseS2k addr 0x1037578 size 0xfc virtual false final false
static ::Org::BouncyCastle::Bcpg::S2k ParseS2k(::System::IO::Stream input) ;

/// @brief Method SkipOpenParenthesis addr 0x1036bcc size 0x78 virtual false final false
static void SkipOpenParenthesis(::System::IO::Stream input) ;

/// @brief Method SkipCloseParenthesis addr 0x1036d0c size 0x78 virtual false final false
static void SkipCloseParenthesis(::System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::____Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities/MyS2k");
