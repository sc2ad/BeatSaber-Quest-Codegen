#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::____GlobalNamespace__VertexPath__Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 normal) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->tangent = tangent;
this->normal = normal;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__set_position(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__set_tangent(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__get_tangent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__set_normal(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex::__get_normal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance);
}
//  Writing Method size for method: ::GlobalNamespace::VertexPath.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VertexPath::*)()>(&::GlobalNamespace::VertexPath::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21af7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x21af234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.UpdateByBezierPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath)>(&::GlobalNamespace::VertexPath::UpdateByBezierPath)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x21af318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "UpdateByBezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.TimeAtPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::TimeAtPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21afd10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "TimeAtPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::VertexPath::GetVertex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x21afd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "GetVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::GetPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21afda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.SplitBezierPathIntoFixNumberOfSegments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath, int32_t)>(&::GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x21af7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "SplitBezierPathIntoFixNumberOfSegments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.AddVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float_t, ByRef<::UnityEngine::Vector3>, ByRef<float_t>, ByRef<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>, ByRef<int32_t>)>(&::GlobalNamespace::VertexPath::AddVertex)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x21afde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "AddVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::VertexPath::__set_vertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::VertexPath::__get_vertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VertexPath::__set__localVertices(::ArrayW<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex> ::GlobalNamespace::VertexPath::__get__localVertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VertexPath::__set__length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::VertexPath::__get__length() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VertexPath::__set__cumulativeLengthAtEachVertex(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::VertexPath::__get__cumulativeLengthAtEachVertex() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::VertexPath::__set__back(::UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_back", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get>(std::forward<::UnityEngine::Vector3>(value));
}
 ::UnityEngine::Vector3 ::GlobalNamespace::VertexPath::__get__back()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_back", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get>();
}
constexpr void ::GlobalNamespace::VertexPath::__set__anchorVertexMap(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::GlobalNamespace::VertexPath::__get__anchorVertexMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::VertexPath::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "numberOfPathSegments", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::VertexPath::VertexPath(int32_t numberOfPathSegments)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<VertexPath>(numberOfPathSegments))) {}
 void ::GlobalNamespace::VertexPath::_ctor(int32_t numberOfPathSegments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfPathSegments);
}
 void ::GlobalNamespace::VertexPath::UpdateByBezierPath(::GlobalNamespace::BezierPath bezierPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "UpdateByBezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bezierPath);
}
 float_t ::GlobalNamespace::VertexPath::TimeAtPoint(int32_t pointIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "TimeAtPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, pointIndex);
}
 void ::GlobalNamespace::VertexPath::GetVertex(int32_t index, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> tangent, ByRef<::UnityEngine::Vector3> normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "GetVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, position, tangent, normal);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::VertexPath::GetPoint(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void ::GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath bezierPath, int32_t numberOfVertexSegments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "SplitBezierPathIntoFixNumberOfSegments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bezierPath, numberOfVertexSegments);
}
 void ::GlobalNamespace::VertexPath::AddVertex(ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3, float_t t, ByRef<::UnityEngine::Vector3> lastRotationAxis, ByRef<float_t> currentPathLength, ByRef<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex> lastVertex, ByRef<int32_t> vertCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath>::get(),
                            "AddVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__VertexPath__Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p0, p1, p2, p3, t, lastRotationAxis, currentPathLength, lastVertex, vertCount);
}
} // end anonymous namespace
