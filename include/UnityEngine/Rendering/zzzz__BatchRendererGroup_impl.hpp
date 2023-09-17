#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2b76ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::*)(::UnityEngine::Rendering::BatchRendererGroup, ::UnityEngine::Rendering::BatchCullingContext)>(&::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b76dfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>(object, method))) {}
 void ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::Unity::Jobs::JobHandle ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(const_cast<void*>(instance), ___internal_method, rendererGroup, cullingContext);
}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>, ByRef<::UnityEngine::Rendering::LODParameters>)>(&::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2b76aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup>::get(),
                            "InvokeOnPerformCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Rendering::BatchRendererGroup::__set_m_GroupHandle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Rendering::BatchRendererGroup::__get_m_GroupHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererGroup::__set_m_PerformCulling(::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling>(value));
}
constexpr ::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling ::UnityEngine::Rendering::BatchRendererGroup::__get_m_PerformCulling() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::____UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup group, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context, ByRef<::UnityEngine::Rendering::LODParameters> lodParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup>::get(),
                            "InvokeOnPerformCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, context, lodParameters);
}
} // end anonymous namespace
