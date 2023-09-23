#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Resources {
class SatelliteContractVersionAttribute;
}
// Type: System.Resources::SatelliteContractVersionAttribute
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3422))
// CS Name: System.Resources.SatelliteContractVersionAttribute
class CORDL_TYPE SatelliteContractVersionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SatelliteContractVersionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: " const&", def_value: None }]
constexpr SatelliteContractVersionAttribute(SatelliteContractVersionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: "&&", def_value: None }]
constexpr SatelliteContractVersionAttribute(SatelliteContractVersionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SatelliteContractVersionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr SatelliteContractVersionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SatelliteContractVersionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SatelliteContractVersionAttribute& operator=(SatelliteContractVersionAttribute&& o) noexcept = default;
  constexpr SatelliteContractVersionAttribute& operator=(SatelliteContractVersionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Version_k__BackingField, put=__set__Version_k__BackingField))  _Version_k__BackingField;

constexpr void __set__Version_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Version_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }]
explicit SatelliteContractVersionAttribute(::StringW version) ;

/// @brief Method .ctor addr 0x2372da0 size 0x78 virtual false final false
 void _ctor(::StringW version) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::SatelliteContractVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::SatelliteContractVersionAttribute, "System.Resources", "SatelliteContractVersionAttribute");
