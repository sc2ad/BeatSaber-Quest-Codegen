#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter;
}
// Type: ::PropertyValuePairBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14732))
// CS Name: MaterialPropertyValuesSetter::PropertyValuePairBase
class CORDL_TYPE GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase&& o) noexcept = default;
  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;

 int32_t __declspec(property(get=__get__propertyId_k__BackingField, put=__set__propertyId_k__BackingField))  _propertyId_k__BackingField;

constexpr void __set__propertyId_k__BackingField(int32_t value) ;

constexpr int32_t __get__propertyId_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_propertyId, put=set_propertyId))  propertyId;


// Methods

/// @brief Method get_propertyId addr 0x1fa2e5c size 0x8 virtual false final false
 int32_t get_propertyId() ;

/// @brief Method set_propertyId addr 0x1fa2e64 size 0x8 virtual false final false
 void set_propertyId(int32_t value) ;

// Ctor Parameters []
explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase() ;

/// @brief Method .ctor addr 0x1fa2e6c size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method RefreshPropertyId addr 0x1fa2e34 size 0x20 virtual false final false
 void RefreshPropertyId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PropertyNameFloatValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14733))
// CS Name: MaterialPropertyValuesSetter::PropertyNameFloatValuePair
class CORDL_TYPE GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair : public GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(ptr) {
}


  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair() ;

/// @brief Method .ctor addr 0x1fa2e94 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PropertyNameIntValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14734))
// CS Name: MaterialPropertyValuesSetter::PropertyNameIntValuePair
class CORDL_TYPE GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair : public GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(ptr) {
}


  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair() ;

/// @brief Method .ctor addr 0x1fa2ebc size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PropertyNameVectorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14735))
// CS Name: MaterialPropertyValuesSetter::PropertyNameVectorValuePair
class CORDL_TYPE GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair : public GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(ptr) {
}


  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector4 __declspec(property(get=__get_vector, put=__set_vector))  vector;

constexpr void __set_vector(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_vector() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair() ;

/// @brief Method .ctor addr 0x1fa2ee4 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PropertyNameColorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14736))
// CS Name: MaterialPropertyValuesSetter::PropertyNameColorValuePair
class CORDL_TYPE GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair : public GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase(ptr) {
}


  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair& operator=(GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair() ;

/// @brief Method .ctor addr 0x1fa2f0c size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MaterialPropertyValuesSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14737))
// CS Name: MaterialPropertyValuesSetter
class CORDL_TYPE MaterialPropertyValuesSetter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyNameColorValuePair = GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair;

using PropertyNameVectorValuePair = GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair;

using PropertyNameIntValuePair = GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair;

using PropertyNameFloatValuePair = GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair;

using PropertyValuePairBase = GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MaterialPropertyValuesSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyValuesSetter(MaterialPropertyValuesSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyValuesSetter(MaterialPropertyValuesSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyValuesSetter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MaterialPropertyValuesSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyValuesSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyValuesSetter& operator=(MaterialPropertyValuesSetter&& o) noexcept = default;
  constexpr MaterialPropertyValuesSetter& operator=(MaterialPropertyValuesSetter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair> __declspec(property(get=__get__floats, put=__set__floats))  _floats;

constexpr void __set__floats(::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair> __get__floats() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair> __declspec(property(get=__get__vectors, put=__set__vectors))  _vectors;

constexpr void __set__vectors(::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair> __get__vectors() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair> __get__colors() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair> __declspec(property(get=__get__ints, put=__set__ints))  _ints;

constexpr void __set__ints(::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair> __get__ints() const;


// Methods

/// @brief Method Start addr 0x1fa2a88 size 0x18 virtual false final false
 void Start() ;

/// @brief Method OnValidate addr 0x1fa2d9c size 0x98 virtual false final false
 void OnValidate() ;

/// @brief Method RefreshPropertyIds addr 0x1fa2aa0 size 0x158 virtual false final false
 void RefreshPropertyIds() ;

/// @brief Method ApplyParams addr 0x1fa2bf8 size 0x1a4 virtual false final false
 void ApplyParams() ;

// Ctor Parameters []
explicit MaterialPropertyValuesSetter() ;

/// @brief Method .ctor addr 0x1fa2e54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameColorValuePair, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameFloatValuePair, "", "MaterialPropertyValuesSetter/PropertyNameFloatValuePair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameIntValuePair, "", "MaterialPropertyValuesSetter/PropertyNameIntValuePair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyNameVectorValuePair, "", "MaterialPropertyValuesSetter/PropertyNameVectorValuePair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MaterialPropertyValuesSetter__PropertyValuePairBase, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
NEED_NO_BOX(GlobalNamespace::MaterialPropertyValuesSetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter, "", "MaterialPropertyValuesSetter");
