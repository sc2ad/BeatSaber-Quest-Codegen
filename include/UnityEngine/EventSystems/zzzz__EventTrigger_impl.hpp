#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__EventTrigger_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDropHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent::*)()>(&UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c1f744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent::UnityEngine__EventSystems__EventTrigger__TriggerEvent()  : UnityEngine::Events::UnityEvent_1<UnityEngine::EventSystems::BaseEventData>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__EventSystems__EventTrigger__TriggerEvent>())) {}
 void UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::*)()>(&UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c1f78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::__set_eventID(UnityEngine::EventSystems::EventTriggerType value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::EventTriggerType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::EventTriggerType>(value));
}
constexpr UnityEngine::EventSystems::EventTriggerType UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::__get_eventID() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::EventTriggerType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::__set_callback(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent>(value));
}
constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::__get_callback() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::UnityEngine__EventSystems__EventTrigger__Entry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__EventSystems__EventTrigger__Entry>())) {}
 void UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.get_delegates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> (UnityEngine::EventSystems::EventTrigger::*)()>(&UnityEngine::EventSystems::EventTrigger::get_delegates)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1f4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "get_delegates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.set_delegates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>)>(&UnityEngine::EventSystems::EventTrigger::set_delegates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1f574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "set_delegates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)()>(&UnityEngine::EventSystems::EventTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1f57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.get_triggers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> (UnityEngine::EventSystems::EventTrigger::*)()>(&UnityEngine::EventSystems::EventTrigger::get_triggers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c1f4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "get_triggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.set_triggers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>)>(&UnityEngine::EventSystems::EventTrigger::set_triggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1f584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "set_triggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::EventTriggerType, UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::Execute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c1f58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventTriggerType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnPointerExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnDrop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnPointerDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnPointerUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnPointerClick)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::OnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::OnDeselect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnScroll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::AxisEventData)>(&UnityEngine::EventSystems::EventTrigger::OnMove)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnUpdateSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::OnUpdateSelected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f6fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnInitializePotentialDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f708;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnBeginDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::EventSystems::EventTrigger::OnEndDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f720;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::OnSubmit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f72c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::EventSystems::EventTrigger.OnCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::EventTrigger::OnCancel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1f738;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::EventTrigger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IPointerEnterHandler() const noexcept {
return UnityEngine::EventSystems::IPointerEnterHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IPointerExitHandler() const noexcept {
return UnityEngine::EventSystems::IPointerExitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IPointerDownHandler() const noexcept {
return UnityEngine::EventSystems::IPointerDownHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IPointerUpHandler() const noexcept {
return UnityEngine::EventSystems::IPointerUpHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept {
return UnityEngine::EventSystems::IInitializePotentialDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IBeginDragHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IBeginDragHandler() const noexcept {
return UnityEngine::EventSystems::IBeginDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IDragHandler() const noexcept {
return UnityEngine::EventSystems::IDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEndDragHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IEndDragHandler() const noexcept {
return UnityEngine::EventSystems::IEndDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDropHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IDropHandler() const noexcept {
return UnityEngine::EventSystems::IDropHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IScrollHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IScrollHandler() const noexcept {
return UnityEngine::EventSystems::IScrollHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IUpdateSelectedHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IUpdateSelectedHandler() const noexcept {
return UnityEngine::EventSystems::IUpdateSelectedHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::ISelectHandler() const noexcept {
return UnityEngine::EventSystems::ISelectHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IDeselectHandler() const noexcept {
return UnityEngine::EventSystems::IDeselectHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::IMoveHandler() const noexcept {
return UnityEngine::EventSystems::IMoveHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr  UnityEngine::EventSystems::EventTrigger::operator UnityEngine::EventSystems::ICancelHandler() const noexcept {
return UnityEngine::EventSystems::ICancelHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::EventSystems::EventTrigger::__set_m_Delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> UnityEngine::EventSystems::EventTrigger::__get_m_Delegates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> UnityEngine::EventSystems::EventTrigger::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "get_delegates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventTrigger::set_delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "set_delegates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::EventSystems::EventTrigger::EventTrigger()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EventTrigger>())) {}
 void UnityEngine::EventSystems::EventTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> UnityEngine::EventSystems::EventTrigger::get_triggers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "get_triggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::EventSystems::EventTrigger::set_triggers(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "set_triggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::EventSystems::EventTrigger::Execute(UnityEngine::EventSystems::EventTriggerType id, UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::EventTriggerType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnDrop(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnSelect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnDeselect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnScroll(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnMove(UnityEngine::EventSystems::AxisEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnUpdateSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnInitializePotentialDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnEndDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnSubmit(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::EventSystems::EventTrigger::OnCancel(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::EventTrigger>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
