#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BezierPath;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexPath;
}
namespace GlobalNamespace {
struct GlobalNamespace__VertexPath__Vertex;
}
// Type: ::Vertex
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6048))
// CS Name: VertexPath::Vertex
struct CORDL_TYPE GlobalNamespace__VertexPath__Vertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr GlobalNamespace__VertexPath__Vertex(UnityEngine::Vector3 position, UnityEngine::Vector3 tangent, UnityEngine::Vector3 normal) noexcept;


                    constexpr GlobalNamespace__VertexPath__Vertex(GlobalNamespace__VertexPath__Vertex const&) = default;
                    constexpr GlobalNamespace__VertexPath__Vertex(GlobalNamespace__VertexPath__Vertex&&) = default;
                    constexpr GlobalNamespace__VertexPath__Vertex& operator=(GlobalNamespace__VertexPath__Vertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__VertexPath__Vertex& operator=(GlobalNamespace__VertexPath__Vertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VertexPath__Vertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_tangent, put=__set_tangent))  tangent;

constexpr void __set_tangent(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_tangent() const;

 UnityEngine::Vector3 __declspec(property(get=__get_normal, put=__set_normal))  normal;

constexpr void __set_normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_normal() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VertexPath
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6049))
// CS Name: VertexPath
class CORDL_TYPE VertexPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Vertex = GlobalNamespace::GlobalNamespace__VertexPath__Vertex;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VertexPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: " const&", def_value: None }]
constexpr VertexPath(VertexPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: "&&", def_value: None }]
constexpr VertexPath(VertexPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VertexPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VertexPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VertexPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VertexPath& operator=(VertexPath&& o) noexcept = default;
  constexpr VertexPath& operator=(VertexPath const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__VertexPath__Vertex> __declspec(property(get=__get__localVertices, put=__set__localVertices))  _localVertices;

constexpr void __set__localVertices(::ArrayW<GlobalNamespace::GlobalNamespace__VertexPath__Vertex> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__VertexPath__Vertex> __get__localVertices() const;

 float_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(float_t value) ;

constexpr float_t __get__length() const;

 ::ArrayW<float_t> __declspec(property(get=__get__cumulativeLengthAtEachVertex, put=__set__cumulativeLengthAtEachVertex))  _cumulativeLengthAtEachVertex;

constexpr void __set__cumulativeLengthAtEachVertex(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__cumulativeLengthAtEachVertex() const;

static UnityEngine::Vector3 __declspec(property(get=__get__back, put=__set__back))  _back;

static void __set__back(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get__back() ;

 ::ArrayW<int32_t> __declspec(property(get=__get__anchorVertexMap, put=__set__anchorVertexMap))  _anchorVertexMap;

constexpr void __set__anchorVertexMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__anchorVertexMap() const;


// Properties

 float_t __declspec(property(get=get_length))  length;


// Methods

/// @brief Method get_length addr 0x21af7a4 size 0x8 virtual false final false
 float_t get_length() ;

// Ctor Parameters [CppParam { name: "numberOfPathSegments", ty: "int32_t", modifiers: "", def_value: None }]
explicit VertexPath(int32_t numberOfPathSegments) ;

/// @brief Method .ctor addr 0x21af234 size 0xe4 virtual false final false
 void _ctor(int32_t numberOfPathSegments) ;

/// @brief Method UpdateByBezierPath addr 0x21af318 size 0x46c virtual false final false
 void UpdateByBezierPath(GlobalNamespace::BezierPath bezierPath) ;

/// @brief Method TimeAtPoint addr 0x21afd10 size 0x38 virtual false final false
 float_t TimeAtPoint(int32_t pointIndex) ;

/// @brief Method GetVertex addr 0x21afd48 size 0x60 virtual false final false
 void GetVertex(int32_t index, ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Vector3> tangent, ByRef<UnityEngine::Vector3> normal) ;

/// @brief Method GetPoint addr 0x21afda8 size 0x38 virtual false final false
 UnityEngine::Vector3 GetPoint(int32_t index) ;

/// @brief Method SplitBezierPathIntoFixNumberOfSegments addr 0x21af7ac size 0x564 virtual false final false
 void SplitBezierPathIntoFixNumberOfSegments(GlobalNamespace::BezierPath bezierPath, int32_t numberOfVertexSegments) ;

/// @brief Method AddVertex addr 0x21afde0 size 0x40c virtual false final false
 void AddVertex(ByRef<UnityEngine::Vector3> p0, ByRef<UnityEngine::Vector3> p1, ByRef<UnityEngine::Vector3> p2, ByRef<UnityEngine::Vector3> p3, float_t t, ByRef<UnityEngine::Vector3> lastRotationAxis, ByRef<float_t> currentPathLength, ByRef<GlobalNamespace::GlobalNamespace__VertexPath__Vertex> lastVertex, ByRef<int32_t> vertCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VertexPath);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VertexPath, "", "VertexPath");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VertexPath__Vertex, "", "VertexPath/Vertex");
