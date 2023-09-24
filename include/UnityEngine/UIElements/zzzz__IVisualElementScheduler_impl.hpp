#pragma once
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerState_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IVisualElementScheduler.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IVisualElementScheduledItem (UnityEngine::UIElements::IVisualElementScheduler::*)(System::Action_1<UnityEngine::UIElements::TimerState>)>(&UnityEngine::UIElements::IVisualElementScheduler::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IVisualElementScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IVisualElementScheduler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IVisualElementScheduler.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IVisualElementScheduledItem (UnityEngine::UIElements::IVisualElementScheduler::*)(System::Action)>(&UnityEngine::UIElements::IVisualElementScheduler::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IVisualElementScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IVisualElementScheduler>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::IVisualElementScheduledItem UnityEngine::UIElements::IVisualElementScheduler::Execute(System::Action_1<UnityEngine::UIElements::TimerState> timerUpdateEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IVisualElementScheduler>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::UIElements::TimerState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IVisualElementScheduledItem, false>(const_cast<void*>(instance), ___internal_method, timerUpdateEvent);
}
 UnityEngine::UIElements::IVisualElementScheduledItem UnityEngine::UIElements::IVisualElementScheduler::Execute(System::Action updateEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IVisualElementScheduler>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IVisualElementScheduledItem, false>(const_cast<void*>(instance), ___internal_method, updateEvent);
}
