#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockRandomValueSetter;
}
// Type: ::MaterialPropertyBlockRandomValueSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14730))
// CS Name: MaterialPropertyBlockRandomValueSetter
class CORDL_TYPE MaterialPropertyBlockRandomValueSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MaterialPropertyBlockRandomValueSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockRandomValueSetter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MaterialPropertyBlockRandomValueSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockRandomValueSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockRandomValueSetter& operator=(MaterialPropertyBlockRandomValueSetter&& o) noexcept = default;
  constexpr MaterialPropertyBlockRandomValueSetter& operator=(MaterialPropertyBlockRandomValueSetter const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Renderer> __declspec(property(get=__get__renderers, put=__set__renderers))  _renderers;

constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer> value) ;

constexpr ::ArrayW<::UnityEngine::Renderer> __get__renderers() const;

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;

 float_t __declspec(property(get=__get__minValue, put=__set__minValue))  _minValue;

constexpr void __set__minValue(float_t value) ;

constexpr float_t __get__minValue() const;

 float_t __declspec(property(get=__get__maxValue, put=__set__maxValue))  _maxValue;

constexpr void __set__maxValue(float_t value) ;

constexpr float_t __get__maxValue() const;

 ::ArrayW<::UnityEngine::MaterialPropertyBlock> __declspec(property(get=__get__materialPropertyBlocks, put=__set__materialPropertyBlocks))  _materialPropertyBlocks;

constexpr void __set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock> value) ;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock> __get__materialPropertyBlocks() const;

 int32_t __declspec(property(get=__get__propertyId, put=__set__propertyId))  _propertyId;

constexpr void __set__propertyId(int32_t value) ;

constexpr int32_t __get__propertyId() const;


// Methods

/// @brief Method Start addr 0x1fa279c size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnValidate addr 0x1fa29a8 size 0x24 virtual false final false
 void OnValidate() ;

/// @brief Method RefreshPropertyId addr 0x1fa29cc size 0x20 virtual false final false
 void RefreshPropertyId() ;

/// @brief Method ApplyParams addr 0x1fa27a0 size 0x208 virtual false final false
 void ApplyParams() ;

// Ctor Parameters []
explicit MaterialPropertyBlockRandomValueSetter() ;

/// @brief Method .ctor addr 0x1fa29ec size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, "", "MaterialPropertyBlockRandomValueSetter");
