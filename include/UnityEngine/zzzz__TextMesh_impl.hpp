#pragma once
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
//  Writing Method size for method: UnityEngine::TextMesh.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextMesh::*)(::StringW)>(&UnityEngine::TextMesh::set_text)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bd6024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextMesh.get_alignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextAlignment (UnityEngine::TextMesh::*)()>(&UnityEngine::TextMesh::get_alignment)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bd6068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "get_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextMesh.set_alignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextMesh::*)(UnityEngine::TextAlignment)>(&UnityEngine::TextMesh::set_alignment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bd60a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "set_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextAlignment>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::TextMesh::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TextAlignment UnityEngine::TextMesh::get_alignment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "get_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextAlignment, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextMesh::set_alignment(UnityEngine::TextAlignment value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextMesh>::get(),
                            "set_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextAlignment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
