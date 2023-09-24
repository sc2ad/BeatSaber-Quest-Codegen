#pragma once
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
//  Writing Method size for method: GlobalNamespace::SongPackMasksModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPackMasksModel::*)(GlobalNamespace::SongPackMaskModelSO)>(&GlobalNamespace::SongPackMasksModel::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22017f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMaskModelSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMasksModel.GetAllSongsMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMasksModel::*)()>(&GlobalNamespace::SongPackMasksModel::GetAllSongsMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2201870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetAllSongsMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMasksModel::*)(ByRef<GlobalNamespace::SongPackMask>)>(&GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x220187c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetSongPackMaskText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPackMasksModel::*)(ByRef<GlobalNamespace::SongPackMask>, ByRef<bool>)>(&GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2201894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetSongPackMaskText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPackMasksModel::__set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMaskModelSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMaskModelSO>(value));
}
constexpr GlobalNamespace::SongPackMaskModelSO GlobalNamespace::SongPackMasksModel::__get__songPackMaskModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMaskModelSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__allSongPackMask(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::SongPackMasksModel::__get__allSongPackMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SongPackMasksModel GlobalNamespace::SongPackMasksModel::New_ctor(GlobalNamespace::SongPackMaskModelSO songPackMasks)  {
GlobalNamespace::SongPackMasksModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SongPackMasksModel>(songPackMasks))};
return o;
}
 void GlobalNamespace::SongPackMasksModel::_ctor(GlobalNamespace::SongPackMaskModelSO songPackMasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMaskModelSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songPackMasks);
}
 GlobalNamespace::SongPackMask GlobalNamespace::SongPackMasksModel::GetAllSongsMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetAllSongsMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetSongPackMaskText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, songPackMask);
}
 ::StringW GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask, ByRef<bool> plural)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SongPackMasksModel>::get(),
                            "GetSongPackMaskText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::SongPackMask>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, songPackMask, plural);
}
