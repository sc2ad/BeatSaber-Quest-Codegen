#pragma once
#include "TMPro/zzzz__FastAction_3_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void TMPro::FastAction_3<A,B,C>::__set_delegates(System::Collections::Generic::LinkedList_1<System::Action_3<A,B,C>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<System::Action_3<A,B,C>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<System::Action_3<A,B,C>>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<System::Action_3<A,B,C>> TMPro::FastAction_3<A,B,C>::__get_delegates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<System::Action_3<A,B,C>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::FastAction_3<A,B,C>::__set_lookup(System::Collections::Generic::Dictionary_2<System::Action_3<A,B,C>,System::Collections::Generic::LinkedListNode_1<System::Action_3<A,B,C>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Action_3<A,B,C>,System::Collections::Generic::LinkedListNode_1<System::Action_3<A,B,C>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Action_3<A,B,C>,System::Collections::Generic::LinkedListNode_1<System::Action_3<A,B,C>>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Action_3<A,B,C>,System::Collections::Generic::LinkedListNode_1<System::Action_3<A,B,C>>> TMPro::FastAction_3<A,B,C>::__get_lookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Action_3<A,B,C>,System::Collections::Generic::LinkedListNode_1<System::Action_3<A,B,C>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void TMPro::FastAction_3<A,B,C>::Add(System::Action_3<A,B,C> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_3<A,B,C>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<A,B,C>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_3<A,B,C>::Remove(System::Action_3<A,B,C> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_3<A,B,C>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<A,B,C>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_3<A,B,C>::Call(A a, B b, C c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_3<A,B,C>>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a, b, c);
}
 TMPro::FastAction_3<A,B,C> TMPro::FastAction_3<A,B,C>::New_ctor()  {
TMPro::FastAction_3<A,B,C> o{THROW_UNLESS(::il2cpp_utils::New<TMPro::FastAction_3<A,B,C>>())};
return o;
}
 void TMPro::FastAction_3<A,B,C>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_3<A,B,C>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
