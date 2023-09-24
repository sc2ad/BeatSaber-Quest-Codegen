#pragma once
#include "GlobalNamespace/zzzz__PathsHolder_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: GlobalNamespace::PathsHolder.get_bezierPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BezierPath (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::get_bezierPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21af100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "get_bezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PathsHolder.get_vertexPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VertexPath (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::get_vertexPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21af108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "get_vertexPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PathsHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PathsHolder::*)(int32_t, bool)>(&GlobalNamespace::PathsHolder::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x21af110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PathsHolder.UpdateVertexPathByBezierPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21af784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "UpdateVertexPathByBezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PathsHolder::__set__bezierPath(GlobalNamespace::BezierPath value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BezierPath, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BezierPath>(value));
}
constexpr GlobalNamespace::BezierPath GlobalNamespace::PathsHolder::__get__bezierPath() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BezierPath, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PathsHolder::__set__vertexPath(GlobalNamespace::VertexPath value)  {
::cordl_internals::setInstanceField<GlobalNamespace::VertexPath, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::VertexPath>(value));
}
constexpr GlobalNamespace::VertexPath GlobalNamespace::PathsHolder::__get__vertexPath() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::VertexPath, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BezierPath GlobalNamespace::PathsHolder::get_bezierPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "get_bezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BezierPath, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::VertexPath GlobalNamespace::PathsHolder::get_vertexPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "get_vertexPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::VertexPath, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param updateVertexPath: bool (default: true)
 GlobalNamespace::PathsHolder GlobalNamespace::PathsHolder::New_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath)  {
GlobalNamespace::PathsHolder o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PathsHolder>(numberOfFixedVertexPathSegments, updateVertexPath))};
return o;
}
/// @param updateVertexPath: bool (default: true)
 void GlobalNamespace::PathsHolder::_ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfFixedVertexPathSegments, updateVertexPath);
}
 void GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PathsHolder>::get(),
                            "UpdateVertexPathByBezierPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
