#pragma once
#include "TMPro/zzzz__FastAction_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: TMPro::FastAction.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)(System::Action)>(&TMPro::FastAction::Add)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a57764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)(System::Action)>(&TMPro::FastAction::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a57824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction.Call
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)()>(&TMPro::FastAction::Call)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a578e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)()>(&TMPro::FastAction::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a5797c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::FastAction::__set_delegates(System::Collections::Generic::LinkedList_1<System::Action> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<System::Action>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<System::Action>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<System::Action> TMPro::FastAction::__get_delegates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<System::Action>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::FastAction::__set_lookup(System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>> TMPro::FastAction::__get_lookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void TMPro::FastAction::Add(System::Action rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction::Remove(System::Action rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction::Call()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 TMPro::FastAction::FastAction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FastAction>())) {}
 void TMPro::FastAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
