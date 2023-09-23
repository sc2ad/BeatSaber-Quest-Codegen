#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class KeyWrapperUtil;
}
// Type: Org.BouncyCastle.Crypto.Operators::KeyWrapperUtil
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(985))
// CS Name: Org.BouncyCastle.Crypto.Operators.KeyWrapperUtil
class CORDL_TYPE KeyWrapperUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyWrapperUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: " const&", def_value: None }]
constexpr KeyWrapperUtil(KeyWrapperUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: "&&", def_value: None }]
constexpr KeyWrapperUtil(KeyWrapperUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyWrapperUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyWrapperUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyWrapperUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyWrapperUtil& operator=(KeyWrapperUtil&& o) noexcept = default;
  constexpr KeyWrapperUtil& operator=(KeyWrapperUtil const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_providerMap, put=__set_providerMap))  providerMap;

static void __set_providerMap(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_providerMap() ;


// Methods

/// @brief Method WrapperForName addr 0xe9b734 size 0x238 virtual false final false
static Org::BouncyCastle::Crypto::IKeyWrapper WrapperForName(::StringW algorithm, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method UnwrapperForName addr 0xe9bf58 size 0x238 virtual false final false
static Org::BouncyCastle::Crypto::IKeyUnwrapper UnwrapperForName(::StringW algorithm, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

// Ctor Parameters []
explicit KeyWrapperUtil() ;

/// @brief Method .ctor addr 0xe9c190 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil, "Org.BouncyCastle.Crypto.Operators", "KeyWrapperUtil");
