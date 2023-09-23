#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultContractResolverState;
}
// Type: Newtonsoft.Json.Serialization::DefaultContractResolverState
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11862))
// CS Name: Newtonsoft.Json.Serialization.DefaultContractResolverState
class CORDL_TYPE DefaultContractResolverState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DefaultContractResolverState() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: " const&", def_value: None }]
constexpr DefaultContractResolverState(DefaultContractResolverState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: "&&", def_value: None }]
constexpr DefaultContractResolverState(DefaultContractResolverState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultContractResolverState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultContractResolverState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultContractResolverState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultContractResolverState& operator=(DefaultContractResolverState&& o) noexcept = default;
  constexpr DefaultContractResolverState& operator=(DefaultContractResolverState const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::ResolverContractKey,Newtonsoft::Json::Serialization::JsonContract> __declspec(property(get=__get_ContractCache, put=__set_ContractCache))  ContractCache;

constexpr void __set_ContractCache(System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::ResolverContractKey,Newtonsoft::Json::Serialization::JsonContract> value) ;

constexpr System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::ResolverContractKey,Newtonsoft::Json::Serialization::JsonContract> __get_ContractCache() const;

 Newtonsoft::Json::Utilities::PropertyNameTable __declspec(property(get=__get_NameTable, put=__set_NameTable))  NameTable;

constexpr void __set_NameTable(Newtonsoft::Json::Utilities::PropertyNameTable value) ;

constexpr Newtonsoft::Json::Utilities::PropertyNameTable __get_NameTable() const;


// Methods

// Ctor Parameters []
explicit DefaultContractResolverState() ;

/// @brief Method .ctor addr 0x24f6d80 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::DefaultContractResolverState);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::DefaultContractResolverState, "Newtonsoft.Json.Serialization", "DefaultContractResolverState");
