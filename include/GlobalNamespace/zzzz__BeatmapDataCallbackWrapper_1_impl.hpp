#pragma once
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__set__callback(GlobalNamespace::BeatmapDataCallback_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallback_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallback_1<T>>(value));
}
constexpr GlobalNamespace::BeatmapDataCallback_1<T> GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__get__callback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallback_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapDataCallbackWrapper_1<T> GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::New_ctor(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers)  {
GlobalNamespace::BeatmapDataCallbackWrapper_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapDataCallbackWrapper_1<T>>(callback, aheadTime, beatmapEventSubtypeIdentifiers))};
return o;
}
 void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::_ctor(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataCallback_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, aheadTime, beatmapEventSubtypeIdentifiers);
}
 void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::CallCallback(GlobalNamespace::BeatmapDataItem beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1<T>>::get(),
                            "CallCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData);
}
