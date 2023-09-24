#pragma once
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
constexpr void System::Dynamic::Utils::CacheDict_2<TKey,TValue>::__set__mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Dynamic::Utils::CacheDict_2<TKey,TValue>::__get__mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Dynamic::Utils::CacheDict_2<TKey,TValue>::__set__entries(::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>>(value));
}
constexpr ::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> System::Dynamic::Utils::CacheDict_2<TKey,TValue>::__get__entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Dynamic::Utils::CacheDict_2<TKey,TValue> System::Dynamic::Utils::CacheDict_2<TKey,TValue>::New_ctor(int32_t size)  {
System::Dynamic::Utils::CacheDict_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Dynamic::Utils::CacheDict_2<TKey,TValue>>(size))};
return o;
}
 void System::Dynamic::Utils::CacheDict_2<TKey,TValue>::_ctor(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 int32_t System::Dynamic::Utils::CacheDict_2<TKey,TValue>::AlignSize(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2<TKey,TValue>>::get(),
                            "AlignSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
