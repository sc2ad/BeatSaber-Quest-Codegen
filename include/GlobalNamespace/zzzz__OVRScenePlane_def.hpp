#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace UnityEngine {
class Transform;
}
namespace Unity::Jobs {
class IJob;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRScenePlane__GetBoundaryJob;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob;
}
// Type: ::GetBoundaryLengthJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8829))
// CS Name: OVRScenePlane::GetBoundaryLengthJob
struct CORDL_TYPE ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Unity::Jobs::IJob
constexpr operator  ::Unity::Jobs::IJob() const;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept;


                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob(____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob const&) = default;
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob(____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob&&) = default;
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob& operator=(____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob& operator=(____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::OVRSpace __declspec(property(get=__get_Space, put=__set_Space))  Space;

constexpr void __set_Space(::GlobalNamespace::OVRSpace value) ;

constexpr ::GlobalNamespace::OVRSpace __get_Space() const;

 ::Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get_Length, put=__set_Length))  Length;

constexpr void __set_Length(::Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> __get_Length() const;


// Methods

/// @brief Method Execute addr 0x260a90c size 0x84 virtual true final true
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetBoundaryJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8830))
// CS Name: OVRScenePlane::GetBoundaryJob
struct CORDL_TYPE ____GlobalNamespace__OVRScenePlane__GetBoundaryJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Unity::Jobs::IJob
constexpr operator  ::Unity::Jobs::IJob() const;

// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "PreviousBoundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary) noexcept;


                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryJob(____GlobalNamespace__OVRScenePlane__GetBoundaryJob const&) = default;
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryJob(____GlobalNamespace__OVRScenePlane__GetBoundaryJob&&) = default;
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryJob& operator=(____GlobalNamespace__OVRScenePlane__GetBoundaryJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRScenePlane__GetBoundaryJob& operator=(____GlobalNamespace__OVRScenePlane__GetBoundaryJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRScenePlane__GetBoundaryJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::OVRSpace __declspec(property(get=__get_Space, put=__set_Space))  Space;

constexpr void __set_Space(::GlobalNamespace::OVRSpace value) ;

constexpr ::GlobalNamespace::OVRSpace __get_Space() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __declspec(property(get=__get_Boundary, put=__set_Boundary))  Boundary;

constexpr void __set_Boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __get_Boundary() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __declspec(property(get=__get_PreviousBoundary, put=__set_PreviousBoundary))  PreviousBoundary;

constexpr void __set_PreviousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __get_PreviousBoundary() const;


// Methods

/// @brief Method HasBoundaryChanged addr 0x260a990 size 0xb0 virtual false final false
 bool HasBoundaryChanged() ;

/// @brief Method SetNaN addr 0x260aa40 size 0x14 virtual false final false
static void SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> array) ;

/// @brief Method Execute addr 0x260aa54 size 0xa8 virtual true final true
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRScenePlane
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8831))
// CS Name: OVRScenePlane
class CORDL_TYPE OVRScenePlane : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GetBoundaryJob = ::GlobalNamespace::____GlobalNamespace__OVRScenePlane__GetBoundaryJob;

using GetBoundaryLengthJob = ::GlobalNamespace::____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob;

/// @brief Convert operator to ::GlobalNamespace::IOVRSceneComponent
constexpr operator  ::GlobalNamespace::IOVRSceneComponent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~OVRScenePlane() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: " const&", def_value: None }]
constexpr OVRScenePlane(OVRScenePlane const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "&&", def_value: None }]
constexpr OVRScenePlane(OVRScenePlane&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRScenePlane(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRScenePlane& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRScenePlane& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRScenePlane& operator=(OVRScenePlane&& o) noexcept = default;
  constexpr OVRScenePlane& operator=(OVRScenePlane const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__Width_k__BackingField, put=__set__Width_k__BackingField))  _Width_k__BackingField;

constexpr void __set__Width_k__BackingField(float_t value) ;

constexpr float_t __get__Width_k__BackingField() const;

 float_t __declspec(property(get=__get__Height_k__BackingField, put=__set__Height_k__BackingField))  _Height_k__BackingField;

constexpr void __set__Height_k__BackingField(float_t value) ;

constexpr float_t __get__Height_k__BackingField() const;

 bool __declspec(property(get=__get__scaleChildren, put=__set__scaleChildren))  _scaleChildren;

constexpr void __set__scaleChildren(bool value) ;

constexpr bool __get__scaleChildren() const;

 ::System::Nullable_1<::Unity::Jobs::JobHandle> __declspec(property(get=__get__jobHandle, put=__set__jobHandle))  _jobHandle;

constexpr void __set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value) ;

constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> __get__jobHandle() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __declspec(property(get=__get__previousBoundary, put=__set__previousBoundary))  _previousBoundary;

constexpr void __set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __get__previousBoundary() const;

 ::Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get__boundaryLength, put=__set__boundaryLength))  _boundaryLength;

constexpr void __set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> __get__boundaryLength() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __declspec(property(get=__get__boundaryBuffer, put=__set__boundaryBuffer))  _boundaryBuffer;

constexpr void __set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __get__boundaryBuffer() const;

 bool __declspec(property(get=__get__boundaryRequested, put=__set__boundaryRequested))  _boundaryRequested;

constexpr void __set__boundaryRequested(bool value) ;

constexpr bool __get__boundaryRequested() const;

 ::GlobalNamespace::OVRSceneAnchor __declspec(property(get=__get__sceneAnchor, put=__set__sceneAnchor))  _sceneAnchor;

constexpr void __set__sceneAnchor(::GlobalNamespace::OVRSceneAnchor value) ;

constexpr ::GlobalNamespace::OVRSceneAnchor __get__sceneAnchor() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __declspec(property(get=__get__boundary, put=__set__boundary))  _boundary;

constexpr void __set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __get__boundary() const;


// Properties

 float_t __declspec(property(get=get_Width, put=set_Width))  Width;

 float_t __declspec(property(get=get_Height, put=set_Height))  Height;

 ::UnityEngine::Vector2 __declspec(property(get=get_Dimensions))  Dimensions;

 ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2> __declspec(property(get=get_Boundary))  Boundary;

 bool __declspec(property(get=get_ScaleChildren, put=set_ScaleChildren))  ScaleChildren;


// Methods

/// @brief Method get_Width addr 0x2609be0 size 0x8 virtual false final false
 float_t get_Width() ;

/// @brief Method set_Width addr 0x2609be8 size 0x8 virtual false final false
 void set_Width(float_t value) ;

/// @brief Method get_Height addr 0x2609bf0 size 0x8 virtual false final false
 float_t get_Height() ;

/// @brief Method set_Height addr 0x2609bf8 size 0x8 virtual false final false
 void set_Height(float_t value) ;

/// @brief Method get_Dimensions addr 0x2609c00 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_Dimensions() ;

/// @brief Method get_Boundary addr 0x2609c08 size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2> get_Boundary() ;

/// @brief Method get_ScaleChildren addr 0x2609c10 size 0x8 virtual false final false
 bool get_ScaleChildren() ;

/// @brief Method set_ScaleChildren addr 0x2609c18 size 0x48 virtual false final false
 void set_ScaleChildren(bool value) ;

/// @brief Method SetChildScale addr 0x2609c60 size 0x90 virtual false final false
static void SetChildScale(::UnityEngine::Transform parentTransform, float_t width, float_t height) ;

/// @brief Method Awake addr 0x2609cf0 size 0xd4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2609dc4 size 0x4 virtual false final false
 void Start() ;

/// @brief Method IOVRSceneComponent.Initialize addr 0x2609df8 size 0x120 virtual true final true
 void IOVRSceneComponent_Initialize() ;

/// @brief Method ScheduleGetLengthJob addr 0x2609f18 size 0x188 virtual false final false
 void ScheduleGetLengthJob() ;

/// @brief Method RequestBoundary addr 0x2609dc8 size 0x30 virtual false final false
 void RequestBoundary() ;

/// @brief Method Update addr 0x260a0a0 size 0x6a4 virtual false final false
 void Update() ;

/// @brief Method OnDisable addr 0x260a774 size 0x114 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit OVRScenePlane() ;

/// @brief Method .ctor addr 0x260a888 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlane);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlane, "", "OVRScenePlane");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRScenePlane__GetBoundaryJob, "", "OVRScenePlane/GetBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob, "", "OVRScenePlane/GetBoundaryLengthJob");
