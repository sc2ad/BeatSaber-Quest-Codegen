#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__SkeletonType;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRCustomSkeleton__RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomSkeleton;
}
// Type: ::RetargetingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8889))
// CS Name: OVRCustomSkeleton::RetargetingType
struct CORDL_TYPE GlobalNamespace__OVRCustomSkeleton__RetargetingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRCustomSkeleton__RetargetingType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRCustomSkeleton__RetargetingType(GlobalNamespace__OVRCustomSkeleton__RetargetingType const&) = default;
                    constexpr GlobalNamespace__OVRCustomSkeleton__RetargetingType(GlobalNamespace__OVRCustomSkeleton__RetargetingType&&) = default;
                    constexpr GlobalNamespace__OVRCustomSkeleton__RetargetingType& operator=(GlobalNamespace__OVRCustomSkeleton__RetargetingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRCustomSkeleton__RetargetingType& operator=(GlobalNamespace__OVRCustomSkeleton__RetargetingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRCustomSkeleton__RetargetingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRCustomSkeleton__RetargetingType_Unwrapped : int32_t {
__OculusSkeleton = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRCustomSkeleton__RetargetingType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRCustomSkeleton__RetargetingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OculusSkeleton offset 0
static GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType const OculusSkeleton;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRCustomSkeleton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8959))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8890))
// CS Name: OVRCustomSkeleton
class CORDL_TYPE OVRCustomSkeleton : public GlobalNamespace::OVRSkeleton {
public:
// Declarations
using RetargetingType = GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~OVRCustomSkeleton() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: " const&", def_value: None }]
constexpr OVRCustomSkeleton(OVRCustomSkeleton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "&&", def_value: None }]
constexpr OVRCustomSkeleton(OVRCustomSkeleton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCustomSkeleton(void* ptr) noexcept : GlobalNamespace::OVRSkeleton(ptr) {
}


  constexpr OVRCustomSkeleton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCustomSkeleton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCustomSkeleton& operator=(OVRCustomSkeleton&& o) noexcept = default;
  constexpr OVRCustomSkeleton& operator=(OVRCustomSkeleton const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Transform> __declspec(property(get=__get__customBones_V2, put=__set__customBones_V2))  _customBones_V2;

constexpr void __set__customBones_V2(System::Collections::Generic::List_1<UnityEngine::Transform> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Transform> __get__customBones_V2() const;

 GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType __declspec(property(get=__get_retargetingType, put=__set_retargetingType))  retargetingType;

constexpr void __set_retargetingType(GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType __get_retargetingType() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::Transform> __declspec(property(get=get_CustomBones))  CustomBones;


// Methods

/// @brief Method get_CustomBones addr 0x261ed2c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Transform> get_CustomBones() ;

/// @brief Method GetBoneTransform addr 0x261ed34 size 0x58 virtual true final false
 UnityEngine::Transform GetBoneTransform(GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId boneId) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x261ed8c size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x261ed90 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method AllocateBones addr 0x261ed94 size 0xc8 virtual false final false
 void AllocateBones() ;

/// @brief Method SetSkeletonType addr 0x261ee5c size 0x88 virtual false final false
 void SetSkeletonType(GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType skeletonType) ;

// Ctor Parameters []
explicit OVRCustomSkeleton() ;

/// @brief Method .ctor addr 0x261eee4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType, "", "OVRCustomSkeleton/RetargetingType");
NEED_NO_BOX(GlobalNamespace::OVRCustomSkeleton);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCustomSkeleton, "", "OVRCustomSkeleton");
