#pragma once
namespace {
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem.TickRealtimeProbes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::*)()>(&::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem::TickRealtimeProbes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem>::get(),
                            "TickRealtimeProbes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
