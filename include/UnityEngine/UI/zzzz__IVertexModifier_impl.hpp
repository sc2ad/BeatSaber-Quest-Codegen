#pragma once
namespace {
#include "UnityEngine/UI/zzzz__IVertexModifier_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IVertexModifier.ModifyVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::IVertexModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>)>(&::UnityEngine::UI::IVertexModifier::ModifyVertices)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::IVertexModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UI::IVertexModifier::ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex> verts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier>::get(),
                            "ModifyVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, verts);
}
} // end anonymous namespace
