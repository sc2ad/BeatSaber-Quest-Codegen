#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO.get_allBeatmapCharacteristics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(),
                            "get_allBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c96e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapCharacteristicCollectionSO::__set__beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::BeatmapCharacteristicCollectionSO::__get__beatmapCharacteristics() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(),
                            "get_allBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapCharacteristicCollectionSO::BeatmapCharacteristicCollectionSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BeatmapCharacteristicCollectionSO>())) {}
 void ::GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
