#pragma once
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapDataCallbackWrapper_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataCallbackWrapper_1::*)(GlobalNamespace::BeatmapDataCallback_1<T>, float_t, ::ArrayW<int32_t>)>(&GlobalNamespace::BeatmapDataCallbackWrapper_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataCallback_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataCallbackWrapper_1.CallCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataCallbackWrapper_1::*)(GlobalNamespace::BeatmapDataItem)>(&GlobalNamespace::BeatmapDataCallbackWrapper_1::CallCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapDataCallbackWrapper_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper_1::__set__callback(GlobalNamespace::BeatmapDataCallback_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallback_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallback_1<T>>(value));
}
constexpr GlobalNamespace::BeatmapDataCallback_1<T> GlobalNamespace::BeatmapDataCallbackWrapper_1::__get__callback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallback_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "GlobalNamespace::BeatmapDataCallback_1<T>", modifiers: "", def_value: None }, CppParam { name: "aheadTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapEventSubtypeIdentifiers", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
 GlobalNamespace::BeatmapDataCallbackWrapper_1::BeatmapDataCallbackWrapper_1(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers)  : GlobalNamespace::BeatmapDataCallbackWrapper(THROW_UNLESS(::il2cpp_utils::New<BeatmapDataCallbackWrapper_1>(callback, aheadTime, beatmapEventSubtypeIdentifiers))) {}
 void GlobalNamespace::BeatmapDataCallbackWrapper_1::_ctor(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataCallback_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, aheadTime, beatmapEventSubtypeIdentifiers);
}
 void GlobalNamespace::BeatmapDataCallbackWrapper_1::CallCallback(GlobalNamespace::BeatmapDataItem beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataCallbackWrapper_1>::get(),
                            "CallCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData);
}
