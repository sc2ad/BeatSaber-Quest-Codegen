#pragma once
#include "UnityEngine/UI/zzzz__FontUpdateTracker_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: UnityEngine::UI::FontUpdateTracker.TrackText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text)>(&UnityEngine::UI::FontUpdateTracker::TrackText)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2be2084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "TrackText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::FontUpdateTracker.RebuildForFont
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Font)>(&UnityEngine::UI::FontUpdateTracker::RebuildForFont)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2be22d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "RebuildForFont",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::FontUpdateTracker.UntrackText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text)>(&UnityEngine::UI::FontUpdateTracker::UntrackText)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2be2478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "UntrackText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UI::FontUpdateTracker::__set_m_Tracked(System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>>, "m_Tracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>> UnityEngine::UI::FontUpdateTracker::__get_m_Tracked()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>>, "m_Tracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get>();
}
 void UnityEngine::UI::FontUpdateTracker::TrackText(UnityEngine::UI::Text t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "TrackText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
 void UnityEngine::UI::FontUpdateTracker::RebuildForFont(UnityEngine::Font f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "RebuildForFont",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, f);
}
 void UnityEngine::UI::FontUpdateTracker::UntrackText(UnityEngine::UI::Text t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::FontUpdateTracker>::get(),
                            "UntrackText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
