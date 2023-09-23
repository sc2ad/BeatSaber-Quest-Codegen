#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__DuplicateNodeError_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::KdTree::DuplicateNodeError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::KdTree::DuplicateNodeError::*)()>(&UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2999ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::DuplicateNodeError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::ProBuilder::KdTree::DuplicateNodeError::DuplicateNodeError()  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<DuplicateNodeError>())) {}
 void UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::DuplicateNodeError>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
