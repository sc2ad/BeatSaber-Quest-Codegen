#pragma once
#include "Zenject/zzzz__IPlaceholderFactory_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
/// @brief Convert operator to Zenject::IValidatable
constexpr  Zenject::IPlaceholderFactory::operator Zenject::IValidatable() const noexcept {
return Zenject::IValidatable(::bs_hook::Il2CppWrapperType::instance);
}
