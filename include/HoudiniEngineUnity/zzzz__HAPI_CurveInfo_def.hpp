#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_CurveType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveInfo;
}
// Type: HoudiniEngineUnity::HAPI_CurveInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9690))
// CS Name: HoudiniEngineUnity.HAPI_CurveInfo
struct CORDL_TYPE HAPI_CurveInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "curveType", ty: "HoudiniEngineUnity::HAPI_CurveType", modifiers: "", def_value: None }, CppParam { name: "curveCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "knotCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isPeriodic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRational", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasKnots", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_CurveInfo(HoudiniEngineUnity::HAPI_CurveType curveType, int32_t curveCount, int32_t vertexCount, int32_t knotCount, bool isPeriodic, bool isRational, int32_t order, bool hasKnots) noexcept;


                    constexpr HAPI_CurveInfo(HAPI_CurveInfo const&) = default;
                    constexpr HAPI_CurveInfo(HAPI_CurveInfo&&) = default;
                    constexpr HAPI_CurveInfo& operator=(HAPI_CurveInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CurveInfo& operator=(HAPI_CurveInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CurveInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 HoudiniEngineUnity::HAPI_CurveType __declspec(property(get=__get_curveType, put=__set_curveType))  curveType;

constexpr void __set_curveType(HoudiniEngineUnity::HAPI_CurveType value) ;

constexpr HoudiniEngineUnity::HAPI_CurveType __get_curveType() const;

 int32_t __declspec(property(get=__get_curveCount, put=__set_curveCount))  curveCount;

constexpr void __set_curveCount(int32_t value) ;

constexpr int32_t __get_curveCount() const;

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

 int32_t __declspec(property(get=__get_knotCount, put=__set_knotCount))  knotCount;

constexpr void __set_knotCount(int32_t value) ;

constexpr int32_t __get_knotCount() const;

 bool __declspec(property(get=__get_isPeriodic, put=__set_isPeriodic))  isPeriodic;

constexpr void __set_isPeriodic(bool value) ;

constexpr bool __get_isPeriodic() const;

 bool __declspec(property(get=__get_isRational, put=__set_isRational))  isRational;

constexpr void __set_isRational(bool value) ;

constexpr bool __get_isRational() const;

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 bool __declspec(property(get=__get_hasKnots, put=__set_hasKnots))  hasKnots;

constexpr void __set_hasKnots(bool value) ;

constexpr bool __get_hasKnots() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CurveInfo, "HoudiniEngineUnity", "HAPI_CurveInfo");
