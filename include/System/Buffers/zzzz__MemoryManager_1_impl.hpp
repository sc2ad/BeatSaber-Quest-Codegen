#pragma once
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
 System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "GetSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Span_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param elementIndex: int32_t (default: 0)
 System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t elementIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "Pin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::MemoryHandle, false>(const_cast<void*>(instance), ___internal_method, elementIndex);
}
 bool System::Buffers::MemoryManager_1<T>::TryGetArray(ByRef<System::ArraySegment_1<T>> segment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "TryGetArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ArraySegment_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, segment);
}
 System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "GetSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Span_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param elementIndex: int32_t (default: 0)
 System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t elementIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "Pin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::MemoryHandle, false>(const_cast<void*>(instance), ___internal_method, elementIndex);
}
 bool System::Buffers::MemoryManager_1<T>::TryGetArray(ByRef<System::ArraySegment_1<T>> segment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::MemoryManager_1<T>>::get(),
                            "TryGetArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ArraySegment_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, segment);
}
