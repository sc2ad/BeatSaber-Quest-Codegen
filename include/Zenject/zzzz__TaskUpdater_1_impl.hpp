#pragma once
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__set_Task(TTask value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TTask>(value));
}
constexpr TTask Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__get_Task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__set_IsRemoved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__get_IsRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::New_ctor(TTask task, int32_t priority)  {
Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>(task, priority))};
return o;
}
 void Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::_ctor(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
 void Zenject::Zenject__TaskUpdater_1____c<TTask>::__set___9(Zenject::Zenject__TaskUpdater_1____c<TTask> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__TaskUpdater_1____c<TTask>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get>(std::forward<Zenject::Zenject__TaskUpdater_1____c<TTask>>(value));
}
 Zenject::Zenject__TaskUpdater_1____c<TTask> Zenject::Zenject__TaskUpdater_1____c<TTask>::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__TaskUpdater_1____c<TTask>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get>();
}
 void Zenject::Zenject__TaskUpdater_1____c<TTask>::__set___9__7_0(System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get>(std::forward<System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>>(value));
}
 System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask> Zenject::Zenject__TaskUpdater_1____c<TTask>::__get___9__7_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>,TTask>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get>();
}
 Zenject::Zenject__TaskUpdater_1____c<TTask> Zenject::Zenject__TaskUpdater_1____c<TTask>::New_ctor()  {
Zenject::Zenject__TaskUpdater_1____c<TTask> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__TaskUpdater_1____c<TTask>>())};
return o;
}
 void Zenject::Zenject__TaskUpdater_1____c<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TTask Zenject::Zenject__TaskUpdater_1____c<TTask>::_AddTaskInternal_b__7_0(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get(),
                            "<AddTaskInternal>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TTask, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__TaskUpdater_1____c<TTask>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__TaskUpdater_1____c<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c<TTask>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
constexpr void Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::__set_task(TTask value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TTask>(value));
}
constexpr TTask Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::__get_task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask> Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::New_ctor()  {
Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>>())};
return o;
}
 void Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::_RemoveTask_b__0(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>>::get(),
                            "<RemoveTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__TaskUpdater_1____c__DisplayClass8_0<TTask>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
constexpr void Zenject::TaskUpdater_1<TTask>::__set__tasks(System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> Zenject::TaskUpdater_1<TTask>::__get__tasks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::TaskUpdater_1<TTask>::__set__queuedTasks(System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> Zenject::TaskUpdater_1<TTask>::__get__queuedTasks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> Zenject::TaskUpdater_1<TTask>::get_AllTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "get_AllTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> Zenject::TaskUpdater_1<TTask>::get_ActiveTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "get_ActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::TaskUpdater_1<TTask>::AddTask(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "AddTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 void Zenject::TaskUpdater_1<TTask>::AddTaskInternal(TTask task, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "AddTaskInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task, priority);
}
 void Zenject::TaskUpdater_1<TTask>::RemoveTask(TTask task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "RemoveTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 void Zenject::TaskUpdater_1<TTask>::OnFrameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "OnFrameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::TaskUpdater_1<TTask>::UpdateAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "UpdateAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::TaskUpdater_1<TTask>::UpdateRange(int32_t minPriority, int32_t maxPriority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "UpdateRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, minPriority, maxPriority);
}
 void Zenject::TaskUpdater_1<TTask>::ClearRemovedTasks(System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "ClearRemovedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedList_1<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void Zenject::TaskUpdater_1<TTask>::AddQueuedTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "AddQueuedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::TaskUpdater_1<TTask>::InsertTaskSorted(Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "InsertTaskSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__TaskUpdater_1__TaskInfo<TTask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 void Zenject::TaskUpdater_1<TTask>::UpdateItem(TTask task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "UpdateItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 Zenject::TaskUpdater_1<TTask> Zenject::TaskUpdater_1<TTask>::New_ctor()  {
Zenject::TaskUpdater_1<TTask> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::TaskUpdater_1<TTask>>())};
return o;
}
 void Zenject::TaskUpdater_1<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::InjectTypeInfo Zenject::TaskUpdater_1<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::TaskUpdater_1<TTask>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
