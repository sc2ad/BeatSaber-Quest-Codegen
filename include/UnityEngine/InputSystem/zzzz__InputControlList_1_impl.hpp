#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TControl>
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::operator System::Collections::Generic::IEnumerator_1<TControl>() const {
return System::Collections::Generic::IEnumerator_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Indices", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::UnityEngine__InputSystem__InputControlList_1__Enumerator(void* m_Indices, int32_t m_Count, int32_t m_Current) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Indices = m_Indices;
this->m_Count = m_Count;
this->m_Current = m_Current;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__set_m_Indices(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__get_m_Indices() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__set_m_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__set_m_Current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::__get_m_Current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::_ctor(UnityEngine::InputSystem::InputControlList_1<TControl> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlList_1<TControl>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, list);
}
 bool UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TControl UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlList_1__Enumerator<TControl>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IList_1<TControl>
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::Generic::IList_1<TControl>() const {
return System::Collections::Generic::IList_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<TControl>
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::Generic::ICollection_1<TControl>() const {
return System::Collections::Generic::ICollection_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TControl>
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::Generic::IEnumerable_1<TControl>() const {
return System::Collections::Generic::IEnumerable_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TControl>
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::Generic::IReadOnlyList_1<TControl>() const {
return System::Collections::Generic::IReadOnlyList_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TControl>
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::Collections::Generic::IReadOnlyCollection_1<TControl>() const {
return System::Collections::Generic::IReadOnlyCollection_1<TControl>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::InputControlList_1<TControl>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Indices", ty: "Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::InputControlList_1(int32_t m_Count, Unity::Collections::NativeArray_1<uint64_t> m_Indices, Unity::Collections::Allocator m_Allocator) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Count = m_Count;
this->m_Indices = m_Indices;
this->m_Allocator = m_Allocator;
}
constexpr void UnityEngine::InputSystem::InputControlList_1<TControl>::__set_m_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::InputControlList_1<TControl>::__set_m_Indices(Unity::Collections::NativeArray_1<uint64_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<uint64_t>, 0x8>(this->__instance, std::forward<Unity::Collections::NativeArray_1<uint64_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<uint64_t> UnityEngine::InputSystem::InputControlList_1<TControl>::__get_m_Indices() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<uint64_t>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::InputControlList_1<TControl>::__set_m_Allocator(Unity::Collections::Allocator value)  {
::cordl_internals::setInstanceField<Unity::Collections::Allocator, 0x10>(this->__instance, std::forward<Unity::Collections::Allocator>(value));
}
constexpr Unity::Collections::Allocator UnityEngine::InputSystem::InputControlList_1<TControl>::__get_m_Allocator() const {
return ::cordl_internals::getInstanceField<Unity::Collections::Allocator, 0x10>(this->__instance);
}
 int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Capacity(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "set_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::InputControlList_1<TControl>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TControl UnityEngine::InputSystem::InputControlList_1<TControl>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TControl, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Item(int32_t index, TControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, value);
}
/// @param initialCapacity: int32_t (default: 0)
 void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(Unity::Collections::Allocator allocator, int32_t initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, allocator, initialCapacity);
}
/// @param allocator: Unity::Collections::Allocator (default: 4)
 void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(System::Collections::Generic::IEnumerable_1<TControl> values, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, values, allocator);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::ArrayW<TControl> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TControl>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, values);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Resize(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, size);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Add(TControl item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
/// @param count: int32_t (default: -1)
/// @param destinationIndex: int32_t (default: -1)
/// @param sourceIndex: int32_t (default: 0)
template<typename TList>
 void UnityEngine::InputSystem::InputControlList_1<TControl>::AddSlice(TList list, int32_t count, int32_t destinationIndex, int32_t sourceIndex)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                        "AddSlice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, list, count, destinationIndex, sourceIndex);
}
/// @param count: int32_t (default: -1)
/// @param destinationIndex: int32_t (default: -1)
 void UnityEngine::InputSystem::InputControlList_1<TControl>::AddRange(System::Collections::Generic::IEnumerable_1<TControl> list, int32_t count, int32_t destinationIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, list, count, destinationIndex);
}
 bool UnityEngine::InputSystem::InputControlList_1<TControl>::Remove(TControl item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::RemoveAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::CopyTo(::ArrayW<TControl> array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TControl>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, arrayIndex);
}
 int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
/// @param count: int32_t (default: -1)
 int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item, int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item, startIndex, count);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Insert(int32_t index, TControl item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, item);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
/// @param count: int32_t (default: -1)
 bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item, int32_t startIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item, startIndex, count);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::SwapElements(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "SwapElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index1, index2);
}
template<typename TCompare>
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Sort(int32_t startIndex, int32_t count, TCompare comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                        "Sort",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCompare>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCompare>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCompare>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, startIndex, count, comparer);
}
/// @param dispose: bool (default: false)
 ::ArrayW<TControl> UnityEngine::InputSystem::InputControlList_1<TControl>::ToArray(bool dispose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TControl>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dispose);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::AppendTo(ByRef<::ArrayW<TControl>> array, ByRef<int32_t> count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "AppendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, count);
}
 void UnityEngine::InputSystem::InputControlList_1<TControl>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<TControl> UnityEngine::InputSystem::InputControlList_1<TControl>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TControl>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::InputControlList_1<TControl>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::InputControlList_1<TControl>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint64_t UnityEngine::InputSystem::InputControlList_1<TControl>::ToIndex(TControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "ToIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, control);
}
 TControl UnityEngine::InputSystem::InputControlList_1<TControl>::FromIndex(uint64_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                            "FromIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, index);
}
