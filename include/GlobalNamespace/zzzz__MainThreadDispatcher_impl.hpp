#pragma once
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: GlobalNamespace::MainThreadDispatcher.DispatchOnMainThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainThreadDispatcher::*)(System::Action)>(&GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2115f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            "DispatchOnMainThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainThreadDispatcher.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainThreadDispatcher::*)()>(&GlobalNamespace::MainThreadDispatcher::Tick)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2115fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainThreadDispatcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainThreadDispatcher::*)()>(&GlobalNamespace::MainThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21160ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ITickable
constexpr  GlobalNamespace::MainThreadDispatcher::operator Zenject::ITickable() const noexcept {
return Zenject::ITickable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainThreadDispatcher::__set__dispatchQueue(System::Collections::Concurrent::ConcurrentQueue_1<System::Action> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<System::Action>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentQueue_1<System::Action>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentQueue_1<System::Action> GlobalNamespace::MainThreadDispatcher::__get__dispatchQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<System::Action>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            "DispatchOnMainThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
template<typename A>
 void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(System::Action_1<A> action, A firstParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<A>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, firstParameter);
}
template<typename A,typename B>
 void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(System::Action_2<A,B> action, A firstParameter, B secondParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<A,B>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, firstParameter, secondParameter);
}
template<typename A,typename B,typename C>
 void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(System::Action_3<A,B,C> action, A firstParameter, B secondParameter, C thirdParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<A,B,C>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, firstParameter, secondParameter, thirdParameter);
}
template<typename A,typename B,typename C,typename D>
 void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(System::Action_4<A,B,C,D> action, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<A,B,C,D>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<D>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, firstParameter, secondParameter, thirdParameter, fourthParameter);
}
 void GlobalNamespace::MainThreadDispatcher::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MainThreadDispatcher GlobalNamespace::MainThreadDispatcher::New_ctor()  {
GlobalNamespace::MainThreadDispatcher o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MainThreadDispatcher>())};
return o;
}
 void GlobalNamespace::MainThreadDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainThreadDispatcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__set_action(System::Action_1<A> value)  {
::cordl_internals::setInstanceField<System::Action_1<A>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<A>>(value));
}
constexpr System::Action_1<A> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action_1<A>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__set_firstParameter(A value)  {
::cordl_internals::setInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<A>(value));
}
constexpr A GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::New_ctor()  {
GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_action(System::Action_2<A,B> value)  {
::cordl_internals::setInstanceField<System::Action_2<A,B>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<A,B>>(value));
}
constexpr System::Action_2<A,B> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action_2<A,B>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_firstParameter(A value)  {
::cordl_internals::setInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<A>(value));
}
constexpr A GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_secondParameter(B value)  {
::cordl_internals::setInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<B>(value));
}
constexpr B GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::New_ctor()  {
GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_action(System::Action_3<A,B,C> value)  {
::cordl_internals::setInstanceField<System::Action_3<A,B,C>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<A,B,C>>(value));
}
constexpr System::Action_3<A,B,C> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action_3<A,B,C>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_firstParameter(A value)  {
::cordl_internals::setInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<A>(value));
}
constexpr A GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_secondParameter(B value)  {
::cordl_internals::setInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<B>(value));
}
constexpr B GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_thirdParameter(C value)  {
::cordl_internals::setInstanceField<C, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<C>(value));
}
constexpr C GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_thirdParameter() const {
return ::cordl_internals::getInstanceField<C, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::New_ctor()  {
GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_action(System::Action_4<A,B,C,D> value)  {
::cordl_internals::setInstanceField<System::Action_4<A,B,C,D>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<A,B,C,D>>(value));
}
constexpr System::Action_4<A,B,C,D> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action_4<A,B,C,D>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_firstParameter(A value)  {
::cordl_internals::setInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<A>(value));
}
constexpr A GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_secondParameter(B value)  {
::cordl_internals::setInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<B>(value));
}
constexpr B GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_thirdParameter(C value)  {
::cordl_internals::setInstanceField<C, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<C>(value));
}
constexpr C GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_thirdParameter() const {
return ::cordl_internals::getInstanceField<C, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_fourthParameter(D value)  {
::cordl_internals::setInstanceField<D, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<D>(value));
}
constexpr D GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_fourthParameter() const {
return ::cordl_internals::getInstanceField<D, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D> GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::New_ctor()  {
GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
