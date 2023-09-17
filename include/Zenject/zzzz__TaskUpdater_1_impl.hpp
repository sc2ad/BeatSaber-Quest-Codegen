#pragma once
namespace {
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1__TaskInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TaskUpdater_1__TaskInfo::*)(TTask, int32_t)>(&::Zenject::____Zenject__TaskUpdater_1__TaskInfo::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1__TaskInfo.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1__TaskInfo.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__set_Task(TTask value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TTask>(value));
}
constexpr TTask ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__get_Task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__set_IsRemoved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__get_IsRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "task", ty: "TTask", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
 ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::____Zenject__TaskUpdater_1__TaskInfo(TTask task, int32_t priority)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TaskUpdater_1__TaskInfo>(task, priority))) {}
 void ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::_ctor(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TaskUpdater_1__TaskInfo::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1__TaskInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TaskUpdater_1____c::*)()>(&::Zenject::____Zenject__TaskUpdater_1____c::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c._AddTaskInternal_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TTask (::Zenject::____Zenject__TaskUpdater_1____c::*)(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>)>(&::Zenject::____Zenject__TaskUpdater_1____c::_AddTaskInternal_b__7_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "<AddTaskInternal>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TaskUpdater_1____c::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TaskUpdater_1____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::____Zenject__TaskUpdater_1____c::__set___9(::Zenject::____Zenject__TaskUpdater_1____c<TTask> value)  {
::cordl_internals::setStaticField<::Zenject::____Zenject__TaskUpdater_1____c<TTask>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get>(std::forward<::Zenject::____Zenject__TaskUpdater_1____c<TTask>>(value));
}
 ::Zenject::____Zenject__TaskUpdater_1____c<TTask> ::Zenject::____Zenject__TaskUpdater_1____c::__get___9()  {
return ::cordl_internals::getStaticField<::Zenject::____Zenject__TaskUpdater_1____c<TTask>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get>();
}
 void ::Zenject::____Zenject__TaskUpdater_1____c::__set___9__7_0(::System::Func_2<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> value)  {
::cordl_internals::setStaticField<::System::Func_2<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get>(std::forward<::System::Func_2<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>>(value));
}
 ::System::Func_2<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> ::Zenject::____Zenject__TaskUpdater_1____c::__get___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get>();
}
// Ctor Parameters []
 ::Zenject::____Zenject__TaskUpdater_1____c::____Zenject__TaskUpdater_1____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TaskUpdater_1____c>())) {}
 void ::Zenject::____Zenject__TaskUpdater_1____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TTask ::Zenject::____Zenject__TaskUpdater_1____c::_AddTaskInternal_b__7_0(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "<AddTaskInternal>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TTask, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TaskUpdater_1____c::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TaskUpdater_1____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::*)()>(&::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0._RemoveTask_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::*)(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>)>(&::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::_RemoveTask_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "<RemoveTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__set_task(TTask value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TTask>(value));
}
constexpr TTask ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__get_task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::____Zenject__TaskUpdater_1____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__TaskUpdater_1____c__DisplayClass8_0>())) {}
 void ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::_RemoveTask_b__0(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "<RemoveTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__TaskUpdater_1____c__DisplayClass8_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::TaskUpdater_1.get_AllTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::get_AllTasks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "get_AllTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.get_ActiveTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::get_ActiveTasks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "get_ActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.AddTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(TTask, int32_t)>(&::Zenject::TaskUpdater_1::AddTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.AddTaskInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(TTask, int32_t)>(&::Zenject::TaskUpdater_1::AddTaskInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddTaskInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.RemoveTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(TTask)>(&::Zenject::TaskUpdater_1::RemoveTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "RemoveTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.OnFrameStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::OnFrameStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "OnFrameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.UpdateAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::UpdateAll)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "UpdateAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.UpdateRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(int32_t, int32_t)>(&::Zenject::TaskUpdater_1::UpdateRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "UpdateRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.ClearRemovedTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>)>(&::Zenject::TaskUpdater_1::ClearRemovedTasks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "ClearRemovedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.AddQueuedTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::AddQueuedTasks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddQueuedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.InsertTaskSorted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>)>(&::Zenject::TaskUpdater_1::InsertTaskSorted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "InsertTaskSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.UpdateItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)(TTask)>(&::Zenject::TaskUpdater_1::UpdateItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::TaskUpdater_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::TaskUpdater_1::*)()>(&::Zenject::TaskUpdater_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TaskUpdater_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::TaskUpdater_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::TaskUpdater_1::__set__tasks(::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> ::Zenject::TaskUpdater_1::__get__tasks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::TaskUpdater_1::__set__queuedTasks(::System::Collections::Generic::List_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> ::Zenject::TaskUpdater_1::__get__queuedTasks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> ::Zenject::TaskUpdater_1::get_AllTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "get_AllTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> ::Zenject::TaskUpdater_1::get_ActiveTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "get_ActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TaskUpdater_1::AddTask(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 void ::Zenject::TaskUpdater_1::AddTaskInternal(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddTaskInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 void ::Zenject::TaskUpdater_1::RemoveTask(TTask task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "RemoveTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 void ::Zenject::TaskUpdater_1::OnFrameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "OnFrameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TaskUpdater_1::UpdateAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "UpdateAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TaskUpdater_1::UpdateRange(int32_t minPriority, int32_t maxPriority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "UpdateRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, minPriority, maxPriority);
}
 void ::Zenject::TaskUpdater_1::ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "ClearRemovedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void ::Zenject::TaskUpdater_1::AddQueuedTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "AddQueuedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::TaskUpdater_1::InsertTaskSorted(::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "InsertTaskSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::____Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 void ::Zenject::TaskUpdater_1::UpdateItem(TTask task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "UpdateItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
// Ctor Parameters []
 ::Zenject::TaskUpdater_1::TaskUpdater_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TaskUpdater_1>())) {}
 void ::Zenject::TaskUpdater_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::InjectTypeInfo ::Zenject::TaskUpdater_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
