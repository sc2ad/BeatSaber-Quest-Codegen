#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Generic/zzzz__LargeArrayBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
// Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_first", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_buffers", ty: "System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::LargeArrayBuilder_1<T>::LargeArrayBuilder_1(int32_t _maxCapacity, ::ArrayW<T> _first, System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> _buffers, ::ArrayW<T> _current, int32_t _index, int32_t _count) noexcept : ::bs_hook::ValueTypeWrapper() {this->_maxCapacity = _maxCapacity;
this->_first = _first;
this->_buffers = _buffers;
this->_current = _current;
this->_index = _index;
this->_count = _count;
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__maxCapacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::LargeArrayBuilder_1<T>::__get__maxCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__first(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x8>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::__get__first() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__buffers(System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>, 0x10>(this->__instance, std::forward<System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>>(value));
}
constexpr System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> System::Collections::Generic::LargeArrayBuilder_1<T>::__get__buffers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>, 0x10>(this->__instance);
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__current(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x18>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::__get__current() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x18>(this->__instance);
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::LargeArrayBuilder_1<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void System::Collections::Generic::LargeArrayBuilder_1<T>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::LargeArrayBuilder_1<T>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(bool initialize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialize);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(int32_t maxCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxCapacity);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::AddRange(System::Collections::Generic::IEnumerable_1<T> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, items);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::AddWithBufferAllocation(T item, ByRef<::ArrayW<T>> destination, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "AddWithBufferAllocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item, destination, index);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, arrayIndex, count);
}
 ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::GetBuffer(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "GetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::LargeArrayBuilder_1<T>::TryMove(ByRef<::ArrayW<T>> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "TryMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array);
}
 void System::Collections::Generic::LargeArrayBuilder_1<T>::AllocateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                            "AllocateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
