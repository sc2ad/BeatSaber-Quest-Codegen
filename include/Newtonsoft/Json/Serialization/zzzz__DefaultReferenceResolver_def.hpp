#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Utilities {
template<typename TFirst,typename TSecond>
class BidirectionalDictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultReferenceResolver;
}
// Type: Newtonsoft.Json.Serialization::DefaultReferenceResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11859))
// CS Name: Newtonsoft.Json.Serialization.DefaultReferenceResolver
class CORDL_TYPE DefaultReferenceResolver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Serialization::IReferenceResolver
constexpr operator  Newtonsoft::Json::Serialization::IReferenceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultReferenceResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: " const&", def_value: None }]
constexpr DefaultReferenceResolver(DefaultReferenceResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultReferenceResolver", modifiers: "&&", def_value: None }]
constexpr DefaultReferenceResolver(DefaultReferenceResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultReferenceResolver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultReferenceResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultReferenceResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultReferenceResolver& operator=(DefaultReferenceResolver&& o) noexcept = default;
  constexpr DefaultReferenceResolver& operator=(DefaultReferenceResolver const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__referenceCount, put=__set__referenceCount))  _referenceCount;

constexpr void __set__referenceCount(int32_t value) ;

constexpr int32_t __get__referenceCount() const;


// Methods

/// @brief Method GetMappings addr 0x24f6784 size 0x110 virtual false final false
 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> GetMappings(::bs_hook::Il2CppWrapperType context) ;

/// @brief Method ResolveReference addr 0x24f69a4 size 0x74 virtual true final true
 ::bs_hook::Il2CppWrapperType ResolveReference(::bs_hook::Il2CppWrapperType context, ::StringW reference) ;

/// @brief Method GetReference addr 0x24f6a18 size 0xf4 virtual true final true
 ::StringW GetReference(::bs_hook::Il2CppWrapperType context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method AddReference addr 0x24f6b0c size 0x6c virtual true final true
 void AddReference(::bs_hook::Il2CppWrapperType context, ::StringW reference, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsReferenced addr 0x24f6b78 size 0x74 virtual true final true
 bool IsReferenced(::bs_hook::Il2CppWrapperType context, ::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters []
explicit DefaultReferenceResolver() ;

/// @brief Method .ctor addr 0x24f6bec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::DefaultReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::DefaultReferenceResolver, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
