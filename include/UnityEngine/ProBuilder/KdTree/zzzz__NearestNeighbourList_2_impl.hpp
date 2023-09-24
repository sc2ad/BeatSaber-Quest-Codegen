#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__NearestNeighbourList_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__PriorityQueue_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__INearestNeighbourList_2_def.hpp"
/// @brief Convert operator to UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>
constexpr  UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::operator UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>() const noexcept {
return UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__set_queue(UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__get_queue() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__set_distanceMath(UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__get_distanceMath() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__set_maxCapacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::__get_maxCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::New_ctor(int32_t maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> distanceMath)  {
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>(maxCapacity, distanceMath))};
return o;
}
 void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::_ctor(int32_t maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> distanceMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxCapacity, distanceMath);
}
 int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::get_MaxCapacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "get_MaxCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::Add(TItem item, float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, distance);
}
 TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::GetFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "GetFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::GetFurtherestDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "GetFurtherestDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::RemoveFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "RemoveFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>::get_IsCapacityReached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>>::get(),
                            "get_IsCapacityReached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>
constexpr  UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::operator UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>() const noexcept {
return UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__set_queue(UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__get_queue() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__set_distanceMath(UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__get_distanceMath() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__set_maxCapacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::__get_maxCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance> UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::New_ctor(int32_t maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> distanceMath)  {
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>(maxCapacity, distanceMath))};
return o;
}
 void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::_ctor(int32_t maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> distanceMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxCapacity, distanceMath);
}
 int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::get_MaxCapacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "get_MaxCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::Add(TItem item, TDistance distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDistance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, distance);
}
 TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::GetFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "GetFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 TDistance UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::GetFurtherestDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "GetFurtherestDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TDistance, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::RemoveFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "RemoveFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>::get_IsCapacityReached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>>::get(),
                            "get_IsCapacityReached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
