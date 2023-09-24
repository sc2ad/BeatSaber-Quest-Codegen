#pragma once
#include "GlobalNamespace/zzzz__ScoreFormatter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: GlobalNamespace::ScoreFormatter.Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&GlobalNamespace::ScoreFormatter::Format)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21c39e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get(),
                            "Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScoreFormatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreFormatter::*)()>(&GlobalNamespace::ScoreFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c3a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::ScoreFormatter::__set__numberFormatInfo(System::Globalization::NumberFormatInfo value)  {
::cordl_internals::setStaticField<System::Globalization::NumberFormatInfo, "_numberFormatInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get>(std::forward<System::Globalization::NumberFormatInfo>(value));
}
 System::Globalization::NumberFormatInfo GlobalNamespace::ScoreFormatter::__get__numberFormatInfo()  {
return ::cordl_internals::getStaticField<System::Globalization::NumberFormatInfo, "_numberFormatInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get>();
}
 ::StringW GlobalNamespace::ScoreFormatter::Format(int32_t score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get(),
                            "Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, score);
}
 GlobalNamespace::ScoreFormatter GlobalNamespace::ScoreFormatter::New_ctor()  {
GlobalNamespace::ScoreFormatter o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ScoreFormatter>())};
return o;
}
 void GlobalNamespace::ScoreFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScoreFormatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
