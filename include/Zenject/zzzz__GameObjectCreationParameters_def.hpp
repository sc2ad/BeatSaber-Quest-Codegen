#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Zenject {
class GameObjectCreationParameters;
}
// Type: Zenject::GameObjectCreationParameters
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10891))
// CS Name: Zenject.GameObjectCreationParameters
class CORDL_TYPE GameObjectCreationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GameObjectCreationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: " const&", def_value: None }]
constexpr GameObjectCreationParameters(GameObjectCreationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectCreationParameters", modifiers: "&&", def_value: None }]
constexpr GameObjectCreationParameters(GameObjectCreationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObjectCreationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameObjectCreationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObjectCreationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObjectCreationParameters& operator=(GameObjectCreationParameters&& o) noexcept = default;
  constexpr GameObjectCreationParameters& operator=(GameObjectCreationParameters const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 ::StringW __declspec(property(get=__get__GroupName_k__BackingField, put=__set__GroupName_k__BackingField))  _GroupName_k__BackingField;

constexpr void __set__GroupName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__GroupName_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__ParentTransform_k__BackingField, put=__set__ParentTransform_k__BackingField))  _ParentTransform_k__BackingField;

constexpr void __set__ParentTransform_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__ParentTransform_k__BackingField() const;

 System::Func_2<Zenject::InjectContext,UnityEngine::Transform> __declspec(property(get=__get__ParentTransformGetter_k__BackingField, put=__set__ParentTransformGetter_k__BackingField))  _ParentTransformGetter_k__BackingField;

constexpr void __set__ParentTransformGetter_k__BackingField(System::Func_2<Zenject::InjectContext,UnityEngine::Transform> value) ;

constexpr System::Func_2<Zenject::InjectContext,UnityEngine::Transform> __get__ParentTransformGetter_k__BackingField() const;

 System::Nullable_1<UnityEngine::Vector3> __declspec(property(get=__get__Position_k__BackingField, put=__set__Position_k__BackingField))  _Position_k__BackingField;

constexpr void __set__Position_k__BackingField(System::Nullable_1<UnityEngine::Vector3> value) ;

constexpr System::Nullable_1<UnityEngine::Vector3> __get__Position_k__BackingField() const;

 System::Nullable_1<UnityEngine::Quaternion> __declspec(property(get=__get__Rotation_k__BackingField, put=__set__Rotation_k__BackingField))  _Rotation_k__BackingField;

constexpr void __set__Rotation_k__BackingField(System::Nullable_1<UnityEngine::Quaternion> value) ;

constexpr System::Nullable_1<UnityEngine::Quaternion> __get__Rotation_k__BackingField() const;

static Zenject::GameObjectCreationParameters __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(Zenject::GameObjectCreationParameters value) ;

static Zenject::GameObjectCreationParameters __get_Default() ;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 ::StringW __declspec(property(get=get_GroupName, put=set_GroupName))  GroupName;

 UnityEngine::Transform __declspec(property(get=get_ParentTransform, put=set_ParentTransform))  ParentTransform;

 System::Func_2<Zenject::InjectContext,UnityEngine::Transform> __declspec(property(get=get_ParentTransformGetter, put=set_ParentTransformGetter))  ParentTransformGetter;

 System::Nullable_1<UnityEngine::Vector3> __declspec(property(get=get_Position, put=set_Position))  Position;

 System::Nullable_1<UnityEngine::Quaternion> __declspec(property(get=get_Rotation, put=set_Rotation))  Rotation;


// Methods

/// @brief Method get_Name addr 0x2d65c6c size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x2d65c74 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_GroupName addr 0x2d65c7c size 0x8 virtual false final false
 ::StringW get_GroupName() ;

/// @brief Method set_GroupName addr 0x2d65c84 size 0x8 virtual false final false
 void set_GroupName(::StringW value) ;

/// @brief Method get_ParentTransform addr 0x2d65c8c size 0x8 virtual false final false
 UnityEngine::Transform get_ParentTransform() ;

/// @brief Method set_ParentTransform addr 0x2d65c94 size 0x8 virtual false final false
 void set_ParentTransform(UnityEngine::Transform value) ;

/// @brief Method get_ParentTransformGetter addr 0x2d65c9c size 0x8 virtual false final false
 System::Func_2<Zenject::InjectContext,UnityEngine::Transform> get_ParentTransformGetter() ;

/// @brief Method set_ParentTransformGetter addr 0x2d65ca4 size 0x8 virtual false final false
 void set_ParentTransformGetter(System::Func_2<Zenject::InjectContext,UnityEngine::Transform> value) ;

/// @brief Method get_Position addr 0x2d65cac size 0xc virtual false final false
 System::Nullable_1<UnityEngine::Vector3> get_Position() ;

/// @brief Method set_Position addr 0x2d65cb8 size 0x8 virtual false final false
 void set_Position(System::Nullable_1<UnityEngine::Vector3> value) ;

/// @brief Method get_Rotation addr 0x2d65cc0 size 0x14 virtual false final false
 System::Nullable_1<UnityEngine::Quaternion> get_Rotation() ;

/// @brief Method set_Rotation addr 0x2d65cd4 size 0x14 virtual false final false
 void set_Rotation(System::Nullable_1<UnityEngine::Quaternion> value) ;

/// @brief Method GetHashCode addr 0x2d65ce8 size 0x294 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d65f7c size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2d660a4 size 0x64 virtual false final false
 bool Equals(Zenject::GameObjectCreationParameters that) ;

/// @brief Method op_Equality addr 0x2d6604c size 0x58 virtual false final false
static bool op_Equality(Zenject::GameObjectCreationParameters left, Zenject::GameObjectCreationParameters right) ;

/// @brief Method op_Inequality addr 0x2d66108 size 0x20 virtual false final false
static bool op_Inequality(Zenject::GameObjectCreationParameters left, Zenject::GameObjectCreationParameters right) ;

static Zenject::GameObjectCreationParameters New_ctor() ;

/// @brief Method .ctor addr 0x2d62634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GameObjectCreationParameters);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GameObjectCreationParameters, "Zenject", "GameObjectCreationParameters");
