#pragma once
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: HMUI::IValueChanger_1.add_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IValueChanger_1::*)(System::Action_1<T>)>(&HMUI::IValueChanger_1::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::IValueChanger_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::IValueChanger_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::IValueChanger_1.remove_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IValueChanger_1::*)(System::Action_1<T>)>(&HMUI::IValueChanger_1::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::IValueChanger_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::IValueChanger_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void HMUI::IValueChanger_1::add_valueChangedEvent(System::Action_1<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::IValueChanger_1>::get(),
                            "add_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::IValueChanger_1::remove_valueChangedEvent(System::Action_1<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::IValueChanger_1>::get(),
                            "remove_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
