#pragma once
#include "TMPro/zzzz__FastAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: TMPro::FastAction_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1::*)(System::Action_1<A>)>(&TMPro::FastAction_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<A>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1::*)(System::Action_1<A>)>(&TMPro::FastAction_1::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<A>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1.Call
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1::*)(A)>(&TMPro::FastAction_1::Call)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1::*)()>(&TMPro::FastAction_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::FastAction_1::__set_delegates(System::Collections::Generic::LinkedList_1<System::Action_1<A>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<System::Action_1<A>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<System::Action_1<A>>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<System::Action_1<A>> TMPro::FastAction_1::__get_delegates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<System::Action_1<A>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::FastAction_1::__set_lookup(System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>> TMPro::FastAction_1::__get_lookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void TMPro::FastAction_1::Add(System::Action_1<A> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<A>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_1::Remove(System::Action_1<A> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<A>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_1::Call(A a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
// Ctor Parameters []
 TMPro::FastAction_1::FastAction_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FastAction_1>())) {}
 void TMPro::FastAction_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: TMPro::FastAction_1<bool>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1<bool>::*)(System::Action_1<bool>)>(&TMPro::FastAction_1<bool>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1<bool>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1<bool>::*)(System::Action_1<bool>)>(&TMPro::FastAction_1<bool>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1<bool>.Call
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1<bool>::*)(bool)>(&TMPro::FastAction_1<bool>::Call)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::FastAction_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction_1<bool>::*)()>(&TMPro::FastAction_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::FastAction_1<bool>::__set_delegates(System::Collections::Generic::LinkedList_1<System::Action_1<bool>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<System::Action_1<bool>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<System::Action_1<bool>>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<System::Action_1<bool>> TMPro::FastAction_1<bool>::__get_delegates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<System::Action_1<bool>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::FastAction_1<bool>::__set_lookup(System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>> TMPro::FastAction_1<bool>::__get_lookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void TMPro::FastAction_1<bool>::Add(System::Action_1<bool> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_1<bool>::Remove(System::Action_1<bool> rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rhs);
}
 void TMPro::FastAction_1<bool>::Call(bool a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            "Call",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
// Ctor Parameters []
 TMPro::FastAction_1<bool>::FastAction_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FastAction_1>())) {}
 void TMPro::FastAction_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::FastAction_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
