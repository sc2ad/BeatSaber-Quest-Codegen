#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Session;
}
// Type: HoudiniEngineUnity::HAPI_Session
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9669))
// CS Name: HoudiniEngineUnity.HAPI_Session
struct CORDL_TYPE HAPI_Session : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_SessionType", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: None }]
constexpr HAPI_Session(::HoudiniEngineUnity::HAPI_SessionType type, int64_t id) noexcept;


                    constexpr HAPI_Session(HAPI_Session const&) = default;
                    constexpr HAPI_Session(HAPI_Session&&) = default;
                    constexpr HAPI_Session& operator=(HAPI_Session const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Session& operator=(HAPI_Session&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Session(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::HoudiniEngineUnity::HAPI_SessionType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_SessionType value) ;

constexpr ::HoudiniEngineUnity::HAPI_SessionType __get_type() const;

 int64_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int64_t value) ;

constexpr int64_t __get_id() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Session, "HoudiniEngineUnity", "HAPI_Session");
